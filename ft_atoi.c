/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:18:48 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/01 20:12:49 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_atoi(long nb)
{
	if (nb >= INT_MIN && nb <= INT_MAX)
		return (nb);
	else
	{
		if (nb < 0)
			return (INT_MIN);
		else
			return (INT_MAX);
	}
}

int	ft_atoi(const char *nptr)
{
	int		i;
	long	ret;
	int		sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ret = ret * 10 + (nptr[i] - '0');
		i++;
	}
	return (check_atoi(ret * sign));
}
