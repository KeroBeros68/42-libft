/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:58:38 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:21:48 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Remplit un bloc mémoire avec un octet donné.
 *
 * Écrit `n` octets de valeur `c` dans le bloc mémoire pointé par `s`.
 *
 * @param s  Pointeur vers le bloc mémoire à remplir.
 * @param c  Octet à écrire (converti en unsigned char).
 * @param n  Nombre d'octets à remplir.
 *
 * @return void*  Pointeur vers le bloc mémoire `s`.
 */
void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *) s;
	while (i < n)
	{
		s2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
