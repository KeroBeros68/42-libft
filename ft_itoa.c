/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:50:59 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/01 22:31:38 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
