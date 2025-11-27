/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:56:28 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:34:24 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Convertit une lettre majuscule en minuscule.
 *
 * Si `c` est une lettre majuscule (A-Z), retourne sa version minuscule.
 * Sinon, retourne `c` inchangé.
 *
 * @param c  Caractère à convertir.
 *
 * @return int  Caractère converti en minuscule, ou `c` inchangé.
 */
int	ft_tolower(int c)
{
	if (ft_isalpha((unsigned char)c) && c < 91)
	{
		c += 32;
	}
	return (c);
}
