/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:45:39 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:00 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * If `c` is a lowercase letter (a-z), returns its uppercase version.
 * Otherwise, returns `c` unchanged.
 *
 * @param c  Character to convert.
 *
 * @return int  Character converted to uppercase, or `c` unchanged.
 */
int	ft_toupper(int c)
{
	if (ft_isalpha((unsigned char)c) && c > 90)
	{
		c -= 32;
	}
	return (c);
}
