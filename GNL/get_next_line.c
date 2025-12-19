/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:19:16 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/19 10:01:52 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_gnl.h"

/**
 * @brief Append a NUL-terminated string `s2` to a growable buffer `s1`.
 *
 * This helper ensures the buffer pointed to by `s1` has enough capacity to
 * contain the concatenation of the existing data (of length `*len1`) and the
 * new string `s2`. If needed, the buffer is reallocated and its capacity
 * (`*cap1`) is updated. The length (`*len1`) is updated to the new length on
 * success.
 *
 * @param s1     Pointer to the existing buffer (may be NULL).
 * @param len1   Pointer to the current length of valid data in `s1`.
 * @param cap1   Pointer to the current capacity (allocated size) of `s1`.
 * @param s2     NUL-terminated string to append to `s1`.
 * @return char* Pointer to the (possibly reallocated) buffer containing the
 *               concatenated string, or NULL on allocation failure. On NULL,
 *               the original `s1` is freed.
 */
static char	*ft_gnl_strjoin(char *s1, size_t *len1,
	size_t *cap1, const char *s2)
{
	size_t	len2;
	size_t	new_len;

	len2 = ft_strlen(s2);
	new_len = *len1 + len2;
	if (new_len + 1 > *cap1)
	{
		*cap1 = new_len + 1 + BUFFER_SIZE;
		s1 = ft_realloc(s1, *len1, *cap1);
		if (!s1)
			return (NULL);
	}
	ft_memcpy(s1 + *len1, s2, len2 + 1);
	*len1 = new_len;
	return (s1);
}

/**
 * @brief Extract the next line from the `stay` buffer.
 *
 * If a newline character is present in `stay->stay`, this function copies up to
 * and including the newline into a newly allocated NUL-terminated string and
 * removes those bytes from the `stay` buffer. If no newline is present, it
 * returns the entirety of the buffer (which may be the last partial line).
 *
 * @param stay  Pointer to the per-file descriptor state structure holding the
 *              buffer (`stay->stay`) and its length (`stay->len`).
 * @return char* Newly allocated NUL-terminated string containing the extracted
 *               line, or NULL on allocation failure.
 */
static char	*ft_gnl_extract_line(t_stay *stay)
{
	char	*newline_pos;
	size_t	line_len;
	char	*line;
	size_t	remaining_len;

	newline_pos = ft_memchr(stay->stay, '\n', stay->len);
	if (newline_pos)
		line_len = newline_pos - stay->stay + 1;
	else
		line_len = stay->len;
	line = (char *)malloc(line_len + 1);
	if (!line)
		return (NULL);
	ft_memcpy(line, stay->stay, line_len);
	line[line_len] = '\0';
	remaining_len = stay->len - line_len;
	if (remaining_len > 0)
		ft_memcpy(stay->stay, stay->stay + line_len, remaining_len);
	stay->len = remaining_len;
	stay->stay[stay->len] = '\0';
	return (line);
}

/**
 * @brief Read from `fd` until a newline is available or EOF/error occurs.
 *
 * This function reads data into `buf` in chunks of `BUFFER_SIZE`, appending
 * read bytes into the `stay` buffer via `ft_gnl_strjoin`. Reading stops when a
 * newline is found in `stay` or when `read()` returns 0 (EOF) or a negative
 * value (error).
 *
 * If EOF is reached and `stay` contains no data, the function returns NULL to
 * indicate no more lines. On allocation or read error it also returns NULL.
 *
 * @param fd    File descriptor to read from.
 * @param stay  Pointer to the per-file descriptor state structure.
 * @param buf   Scratch buffer of size `BUFFER_SIZE + 1` for `read()` and
 *              temporary NUL-termination.
 * @return char* Newly allocated line returned by `ft_gnl_extract_line`, or
 *               NULL on EOF (when nothing stored), allocation failure, or
 *               read error.
 */
static char	*read_line(int fd, t_stay *stay, char *buf)
{
	ssize_t	bytes_read;
	char	*newline_pos;
	char	*line;

	bytes_read = 1;
	while (bytes_read > 0)
	{
		newline_pos = ft_memchr(stay->stay, '\n', stay->len);
		if (newline_pos)
			break ;
		bytes_read = read(fd, buf, BUFFER_SIZE);
		if (bytes_read < 0)
			return (NULL);
		if (bytes_read == 0)
			break ;
		buf[bytes_read] = '\0';
		stay->stay = ft_gnl_strjoin(stay->stay, &stay->len, &stay->cap, buf);
		if (!stay->stay)
			return (NULL);
	}
	if (bytes_read == 0 && stay->len == 0)
		return (free(stay->stay), NULL);
	line = ft_gnl_extract_line(stay);
	return (line);
}

/**
 * @brief Public API: return next line read from file descriptor `fd`.
 *
 * This function provides a per-file descriptor state (`stays`) and calls
 * `read_line` to obtain the next line. It validates the `fd` and returns NULL
 * on invalid descriptors or when there is no more data to read.
 *
 * Special case: calling with `fd == -1` frees all accumulated buffers.
 *
 * @param fd  File descriptor to read from. Use -1 to cleanup all buffers.
 * @return char* Newly allocated NUL-terminated string containing the next
 *               line (including trailing '\n' if present), or NULL on error
 *               or when no more lines are available.
 */
char	*get_next_line(int fd)
{
	static t_stay	stays[OPEN_MAX];
	char			*line;
	char			buf[BUFFER_SIZE + 1];
	int				i;

	if (fd == -1)
	{
		i = 0;
		while (i < OPEN_MAX)
		{
			if (stays[i].stay)
			{
				free(stays[i].stay);
				stays[i].stay = NULL;
				stays[i].len = 0;
				stays[i].cap = 0;
			}
			i++;
		}
		return (NULL);
	}
	if (fd < 0 || fd >= OPEN_MAX)
		return (NULL);
	line = read_line(fd, &stays[fd], buf);
	return (line);
}
