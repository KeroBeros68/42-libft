/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 17:45:39 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:00:08 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Convertit une lettre minuscule en majuscule.
 *
 * Si `c` est une lettre minuscule (a-z), retourne sa version majuscule.
 * Sinon, retourne `c` inchangé.
 *
 * @param c  Caractère à convertir.
 *
 * @return int  Caractère converti en majuscule, ou `c` inchangé.
 */
int	ft_toupper(int c)
{
	if (ft_isalpha((unsigned char)c) && c > 90)
	{
		c -= 32;
	}
	return (c);
}
