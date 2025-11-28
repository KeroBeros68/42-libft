/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:05:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 17:56:26 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Copie un bloc mémoire vers un autre en partant de la fin.
 *
 * Copie `n` octets du bloc mémoire `src` vers le bloc `dest` en
 * commençant par le dernier octet. Utile pour gérer les chevauchements
 * lorsqu'on doit copier en arrière.
 *
 * @param dest  Pointeur vers le bloc mémoire de destination.
 * @param src   Pointeur vers le bloc mémoire source.
 * @param n     Nombre d'octets à copier.
 *
 * @return void*  Pointeur vers la mémoire de destination `dest`.
 */
static void	*ft_memcpybckw(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	d = (unsigned char *)dest;
	while (n--)
	{
		*d = *s;
		d--;
		s--;
	}
	return (dest);
}

/**
 * @brief Copie un bloc mémoire vers un autre en gérant le chevauchement.
 *
 * Si les blocs se chevauchent et que `dest` est après `src`, la copie
 * est effectuée en partant de la fin pour éviter l'écrasement.
 * Sinon, une copie classique est réalisée.
 *
 * @param dest  Pointeur vers le bloc mémoire de destination.
 * @param src   Pointeur vers le bloc mémoire source.
 * @param n     Nombre d'octets à copier.
 *
 * @return void*  Pointeur vers la mémoire de destination `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		ft_memcpybckw(dest + n - 1, src + n - 1, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
