/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:56:28 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:00 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * If `c` is an uppercase letter (A-Z), returns its lowercase version.
 * Otherwise, returns `c` unchanged.
 *
 * @param c  Character to convert.
 *
 * @return int  Character converted to lowercase, or `c` unchanged.
 */
int	ft_tolower(int c)
{
	if (ft_isalpha((unsigned char)c) && c < 91)
	{
		c += 32;
	}
	return (c);
}
