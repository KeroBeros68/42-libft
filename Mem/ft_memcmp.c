/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:57:17 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:56 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Compares two memory blocks byte by byte.
 *
 * Iterates through the first `n` bytes of the blocks `s1` and `s2` and returns
 * the difference between the first different byte encountered.
 *
 * @param s1  First memory block to compare.
 * @param s2  Second memory block to compare.
 * @param n   Number of bytes to compare.
 *
 * @return int  Difference between the different bytes,
 * or 0 if the blocks are identical for `n` bytes.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p1 = s1;
	const unsigned char	*p2 = s2;

	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
