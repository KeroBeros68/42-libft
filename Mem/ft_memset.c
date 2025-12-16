/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 13:58:38 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:58 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Fills a memory block with a given byte.
 *
 * Writes `n` bytes of value `c` to the memory block pointed to by `s`.
 *
 * @param s  Pointer to the memory block to fill.
 * @param c  Byte to write (converted to unsigned char).
 * @param n  Number of bytes to fill.
 *
 * @return void*  Pointer to the memory block `s`.
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
