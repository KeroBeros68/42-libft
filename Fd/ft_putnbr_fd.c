/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:36:19 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:22 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes an integer to the given file descriptor.
 *
 * Sends the number `n` to the file descriptor `fd`. Handles negative numbers
 * by adding a '-' prefix.
 *
 * @param n   Integer to write.
 * @param fd  File descriptor where to write the number.
 *
 * @return ssize_t  Total number of characters written, or -1 if an error occurs.
 */
ssize_t	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;
	ssize_t		ret;

	ret = 0;
	nbr = n;
	if (nbr < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		ret++;
		nbr *= -1;
	}
	if (nbr > 9)
		ret += ft_putnbr_fd(nbr / 10, fd);
	if (ft_putchar_fd(nbr % 10 + '0', fd) == -1)
		return (-1);
	return (ret++);
}
