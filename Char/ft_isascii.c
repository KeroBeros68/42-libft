/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:03:01 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:36:49 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Vérifie si un caractère fait partie de la table ASCII.
 *
 * Retourne vrai si `c` est compris entre 0 et 127 inclus.
 *
 * @param c  Caractère à tester.
 *
 * @return int  Non nul si `c` est un caractère ASCII, 0 sinon.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
