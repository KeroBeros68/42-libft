/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 11:22:11 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:56 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Searches for a byte in a memory block.
 *
 * Iterates through the first `n` bytes of the block pointed to by `s` and
 * returns a pointer to the first byte equal to `c`.
 *
 * @param s  Pointer to the memory block to search through.
 * @param c  Byte to search for (converted to unsigned char).
 * @param n  Number of bytes to examine.
 *
 * @return void*  Pointer to the byte found, or NULL if not found.
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
