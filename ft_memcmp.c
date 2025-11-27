/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 12:57:17 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:19:31 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compare deux blocs mémoire octet par octet.
 *
 * Parcourt les `n` premiers octets des blocs `s1` et `s2` et retourne
 * la différence entre le premier octet différent rencontré.
 *
 * @param s1  Premier bloc mémoire à comparer.
 * @param s2  Second bloc mémoire à comparer.
 * @param n   Nombre d'octets à comparer.
 *
 * @return int  Différence entre les octets différents,
 * ou 0 si les blocs sont identiques sur `n` octets.
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
