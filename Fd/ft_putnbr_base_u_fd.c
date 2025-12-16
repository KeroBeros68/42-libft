/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:32:09 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:27 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Prepares an integer for base conversion on a file descriptor.
 *
 * Converts the number `nbr` to `unsigned long long`
 * and handles the sign if necessary.
 * Writes the '-' sign to the file descriptor `fd` if the number is negative
 * and not unsigned.
 *
 * @param u    Sign indicator: 0 for signed number, 1 for unsigned.
 * @param n    Pointer to the variable where to store the converted value.
 * @param nbr  Integer to prepare.
 * @param fd   File descriptor for writing the sign if necessary.
 *
 * @return ssize_t  0 if no character added, 1 if '-' was written,
 * -1 if an error occurs.
 */
static ssize_t	ftputnbrbase_helper(int u, unsigned long long *n,
	long long nbr, int fd)
{
	if (u == 1)
		*n = (unsigned long long)nbr;
	else if (nbr < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		*n = -(unsigned long long)nbr;
		return (1);
	}
	else
		*n = (unsigned long long)nbr;
	return (0);
}

/**
 * @brief Writes an integer to a file descriptor in a given base.
 *
 * Converts `nbr` to a string according to the base provided by `base`
 * and writes it to the file descriptor `fd`.
 * Handles negative numbers if `u` is nonzero.
 *
 * @param nbr   Integer to write.
 * @param base  String representing the characters of the base
 * (e.g., "0123456789ABCDEF").
 * @param u     Sign indicator: 0 for unsigned, 1 for signed.
 * @param fd    File descriptor where to write the number.
 *
 * @return ssize_t  Total number of characters written, or -1 if an error occurs.
 *
 * @note The function validates the base before conversion.
 */
ssize_t	ft_putnbr_base_u_fd(long long nbr, const char *base,
			const int u, int fd)
{
	unsigned long long	n;
	const size_t		base_len = ft_strlen(base);
	ssize_t				count;
	ssize_t				ret;

	count = 0;
	ret = 0;
	if (!ft_check_base(base, base_len))
		return (-1);
	count += ftputnbrbase_helper(u, &n, nbr, fd);
	if (count == -1)
		return (-1);
	if (n >= base_len)
		ret = ft_putnbr_base_u_fd((long long)(n / base_len), base, 1, fd);
	if (ret == -1)
		return (-1);
	if (ft_putchar_fd(base[n % base_len], fd) == -1)
		return (-1);
	return (count + ret + 1);
}
