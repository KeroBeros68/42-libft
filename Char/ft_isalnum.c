/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:02:41 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 17:59:56 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Vérifie si un caractère est alphanumérique.
 *
 * Retourne vrai si `c` est une lettre (a-z, A-Z) ou un chiffre (0-9).
 *
 * @param c  Caractère à tester.
 *
 * @return int  Non nul si `c` est alphanumérique, 0 sinon.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
