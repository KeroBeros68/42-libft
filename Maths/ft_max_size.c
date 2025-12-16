/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:14:46 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:57:12 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Returns the larger of two size values.
 *
 * Compares two `size_t` values and returns the larger one.
 *
 * @param a  First size to compare.
 * @param b  Second size to compare.
 *
 * @return size_t  The maximum value between `a` and `b`.
 */
size_t	ft_max_size(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}
