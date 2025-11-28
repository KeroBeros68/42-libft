/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:03:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:37:09 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Vérifie si un caractère est un chiffre décimal.
 *
 * Retourne vrai si `c` est compris entre '0' et '9'.
 *
 * @param c  Caractère à tester.
 *
 * @return int  Non nul si `c` est un chiffre, 0 sinon.
 */
int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
