/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:01:08 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:36:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Vérifie si un caractère est alphabétique.
 *
 * Retourne vrai si `c` est une lettre majuscule (A-Z) ou minuscule (a-z).
 *
 * @param c  Caractère à tester.
 *
 * @return int  Non nul si `c` est alphabétique, 0 sinon.
 */
int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}
