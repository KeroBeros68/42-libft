/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:04:48 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:57 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Copies a memory block to another.
 *
 * Copies `n` bytes from the `src` memory block to the `dest` block.
 * The blocks must not overlap.
 *
 * @param dest  Pointer to the destination memory block.
 * @param src   Pointer to the source memory block.
 * @param n     Number of bytes to copy.
 *
 * @return void*  Pointer to the destination memory `dest`.
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
