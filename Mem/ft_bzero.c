/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:02:29 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:54 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Fills a memory block with zeros.
 *
 * Writes `n` bytes of zero value to the memory area pointed to by `s`.
 *
 * @param s  Pointer to the memory block to fill.
 * @param n  Number of bytes to set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
