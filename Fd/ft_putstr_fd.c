/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:26:24 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:24 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes a string to a file descriptor.
 *
 * Sends the string `s` character by character to the file descriptor `fd`.
 *
 * @param s   String to write. If NULL, does nothing.
 * @param fd  File descriptor where to write the string.
 *
 * @return ssize_t  Total number of characters written,
 * or -1 if a write error occurs.
 */
ssize_t	ft_putstr_fd(char *s, int fd)
{
	ssize_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' )
	{
		if (write(fd, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}
