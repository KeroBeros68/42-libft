/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:05:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:57 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Copies a memory block to another starting from the end.
 *
 * Copies `n` bytes from the `src` memory block to the `dest` block by
 * starting with the last byte. Useful for handling overlaps
 * when copying backwards.
 *
 * @param dest  Pointer to the destination memory block.
 * @param src   Pointer to the source memory block.
 * @param n     Number of bytes to copy.
 *
 * @return void*  Pointer to the destination memory `dest`.
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
 * @brief Copies a memory block to another while handling overlap.
 *
 * If the blocks overlap and `dest` is after `src`, the copy
 * is performed starting from the end to avoid overwriting.
 * Otherwise, a standard copy is performed.
 *
 * @param dest  Pointer to the destination memory block.
 * @param src   Pointer to the source memory block.
 * @param n     Number of bytes to copy.
 *
 * @return void*  Pointer to the destination memory `dest`.
 */
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest > src)
		ft_memcpybckw(dest + n - 1, src + n - 1, n);
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
