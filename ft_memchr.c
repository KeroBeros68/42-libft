/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:22:11 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:18:38 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Recherche un octet dans un bloc mémoire.
 *
 * Parcourt les `n` premiers octets du bloc pointé par `s` et
 * retourne un pointeur vers le premier octet égal à `c`.
 *
 * @param s  Pointeur vers le bloc mémoire à parcourir.
 * @param c  Octet à rechercher (converti en unsigned char).
 * @param n  Nombre d'octets à examiner.
 *
 * @return void*  Pointeur vers l'octet trouvé, ou NULL si non trouvé.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		if (s2[i] == (unsigned char)c)
		{
			return ((void *)(s2 + i));
		}
		i++;
	}
	return (NULL);
}
