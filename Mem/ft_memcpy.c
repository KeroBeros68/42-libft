/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:04:48 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 17:56:18 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Copie un bloc mémoire vers un autre.
 *
 * Copie `n` octets du bloc mémoire `src` vers le bloc `dest`.
 * Les blocs ne doivent pas se chevaucher.
 *
 * @param dest  Pointeur vers le bloc mémoire de destination.
 * @param src   Pointeur vers le bloc mémoire source.
 * @param n     Nombre d'octets à copier.
 *
 * @return void*  Pointeur vers la mémoire de destination `dest`.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s = (const unsigned char *)src;

	d = (unsigned char *)dest;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}
