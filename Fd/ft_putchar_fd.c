/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:17:23 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:12 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes a character to the given file descriptor.
 *
 * Sends the character `c` to the file descriptor `fd`.
 *
 * @param c   Character to write.
 * @param fd  File descriptor where to write the character.
 *
 * @return ssize_t  Number of bytes written (1 if success, -1 if error).
 */
ssize_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
