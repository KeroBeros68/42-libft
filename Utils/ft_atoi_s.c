/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:18:48 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/02 15:47:08 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Clamps a long value to the valid range of int.
 *
 * This function checks whether the given long value fits within the
 * range defined by INT_MIN and INT_MAX. If the value exceeds this range,
 * an error flag is set and 0 is returned. If the value is exactly
 * INT_MIN or INT_MAX, the corresponding limit is returned directly.
 *
 * @param nb     The long value to clamp.
 * @param error  Pointer to a boolean flag that will be set to true if
 *               an overflow or underflow occurs.
 *
 * @return int   The clamped integer value, or 0 if an overflow/underflow
 *               was detected.
 */
static int	clamp_to_int_range_s(long nb, bool *error)
{
	if (nb == INT_MIN)
		return (INT_MIN);
	if (nb == INT_MAX)
		return (INT_MAX);
	if (nb > INT_MAX || nb < INT_MIN)
	{
		*error = true;
		return (0);
	}
	return (nb);
}

/**
 * @brief Converts a string to an integer with overflow detection.
 *
 * This function parses the input string, skipping any leading whitespace,
 * handling an optional '+' or '-' sign, and converting the following
 * sequence of digits into an integer value.
 *
 * If the resulting number exceeds the range of a signed 32-bit integer,
 * the `error` flag is set to true and the clamped value (0) is returned.
 *
 * @param nptr   The string to convert.
 * @param error  Pointer to a boolean flag that will be set to true if
 *               an overflow or underflow occurs during conversion.
 *
 * @return int   The converted integer value, clamped if out of range.
 */
int	ft_atoi_s(const char *nptr, bool *error)
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
	return (clamp_to_int_range_s(ret * sign, error));
}
