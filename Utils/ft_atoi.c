/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:18:48 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/02 15:41:57 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Clamps a long number to the range of a signed integer.
 *
 * If `nb` is less than INT_MIN, INT_MIN is returned.
 * If `nb` is greater than INT_MAX, INT_MAX is returned.
 * Otherwise, the value is returned as a regular int.
 *
 * @param nb  The long number to clamp.
 *
 * @return int  The value constrained to the [INT_MIN, INT_MAX] range.
 */
static int	clamp_to_int_range(long nb)
{
	if (nb < INT_MIN)
		return (INT_MIN);
	if (nb > INT_MAX)
		return (INT_MAX);
	return (nb);
}

/**
 * @brief Converts a character string to an integer.
 *
 * Skips leading whitespace and control characters, then processes
 * an optional '+' or '-' sign. Afterwards, it converts the
 * sequence of digits into an integer value.
 *
 * @param nptr  The string to convert.
 *
 * @return int  The integer value represented by the string.
 *
 * @note The function uses `clamp_to_int_range` to handle overflows.
 */
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
	return (clamp_to_int_range(ret * sign));
}
