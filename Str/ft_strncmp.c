/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:49:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:54 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Compares two strings up to at most n characters.
 *
 * Iterates through strings `s1` and `s2` and returns the difference between
 * the first byte found that is different, or 0 if the first n characters
 * are identical or if one string ends before n.
 *
 * @param s1  First string to compare.
 * @param s2  Second string to compare.
 * @param n   Maximum number of characters to compare.
 *
 * @return int  Difference between the different bytes,
 * or 0 if identical for n characters.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sc1 = (const unsigned char	*)s1;
	const unsigned char	*sc2 = (const unsigned char	*)s2;

	i = 0;
	while ((sc1[i] != '\0' || sc2[i] != '\0') && i < n)
	{
		if (sc1[i] != sc2[i])
			return (sc1[i] - sc2[i]);
		i++;
	}
	return (0);
}
