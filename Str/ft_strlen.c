/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:06:58 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:01:28 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Calcule la longueur d'une chaîne de caractères.
 *
 * Parcourt la chaîne `s` jusqu'au caractère nul et retourne le nombre
 * de caractères avant le '\0'.
 *
 * @param s  Chaîne de caractères dont on veut connaître la longueur.
 *
 * @return size_t  Longueur de la chaîne.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
