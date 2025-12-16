/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:50:59 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:04:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Counts the number of digits in an integer.
 *
 * Calculates how many characters are needed to represent
 * the integer `n` in base 10, ignoring the sign.
 *
 * @param n  Integer whose digit count is needed.
 *
 * @return size_t  Number of digits of `n`.
 */
static size_t	countchar(int n)
{
	size_t	count;

	count = 1;
	while (n / 10 != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/**
 * @brief Fills a string with the decimal representation of an integer.
 *
 * Places the digits of `n` in the string `s`, starting from the end.
 * If `sign` is nonzero, adds a '-' at the beginning of the string.
 *
 * @param s      String in which to write the number.
 * @param n      Integer to convert.
 * @param count  Total number of characters representing the number
 *               (excluding '\0').
 * @param sign   Indicates if the number is negative (1) or not (0).
 */
static void	setnum(char *s, int n, size_t count, int sign)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (sign)
		{
			s[0] = '-';
			s[count - i] = n % 10 + '0';
		}
		else
			s[count - i - 1] = n % 10 + '0';
		n = n / 10;
		i++;
	}
}

/**
 * @brief Converts an integer to a string.
 *
 * Handles the special case of INT_MIN, determines the sign, calculates the
 * number of necessary digits, and fills the result string.
 *
 * @param n  Integer to convert to a string.
 *
 * @return char*  String representing the integer, or NULL if an allocation
 *                error occurs.
 */
char	*ft_itoa(int n)
{
	char	*s;
	size_t	count;
	int		sign;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	count = countchar(n);
	s = ft_calloc(count + sign + 1, sizeof(char));
	if (!s)
		return (NULL);
	setnum(s, n, count, sign);
	return (s);
}
