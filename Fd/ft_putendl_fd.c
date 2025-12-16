/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:32:01 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:21 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes a string followed by a newline to a file descriptor.
 *
 * Sends the string `s` to the file descriptor `fd`, then adds a '\n' at the end.
 *
 * @param s   String to write. If NULL, does nothing.
 * @param fd  File descriptor where to write the string.
 *
 * @return ssize_t  Total number of bytes written (including the '\n'),
 * or -1 if an error occurs.
 */
ssize_t	ft_putendl_fd(char *s, int fd)
{
	ssize_t	ret;

	if (!s)
		return (0);
	ret = ft_putstr_fd(s, fd);
	if (ret == -1)
		return (-1);
	if (ft_putchar_fd('\n', fd) == -1)
		return (-1);
	return (ret + 1);
}
