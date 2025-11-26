/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:32:09 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 18:15:59 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
