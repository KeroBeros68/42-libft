/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:04:23 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:37:30 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Vérifie si un caractère est imprimable.
 *
 * Retourne vrai si `c` est un caractère imprimable
 * (codes ASCII 32 à 126 inclus).
 *
 * @param c  Caractère à tester.
 *
 * @return int  Non nul si `c` est imprimable, 0 sinon.
 */
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
