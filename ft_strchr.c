/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:09:47 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:25:00 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Recherche la première occurrence d'un caractère dans une chaîne.
 *
 * Parcourt la chaîne `s` et retourne un pointeur vers la première occurrence
 * de `c`. Si `c` vaut '\0', retourne un pointeur sur le caractère nul final.
 *
 * @param s  Chaîne de caractères à parcourir.
 * @param c  Caractère à rechercher.
 *
 * @return char*  Pointeur vers la première occurrence de `c`,
 * ou NULL si non trouvé.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
