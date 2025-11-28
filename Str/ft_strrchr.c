/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:23:12 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:01:44 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Recherche la dernière occurrence d'un caractère dans une chaîne.
 *
 * Parcourt la chaîne `s` depuis la fin et retourne un pointeur vers
 * la dernière occurrence de `c`. Si `c` vaut '\0', retourne un
 * pointeur sur le caractère nul final.
 *
 * @param s  Chaîne de caractères à parcourir.
 * @param c  Caractère à rechercher.
 *
 * @return char*  Pointeur vers la dernière occurrence de `c`,
 * ou NULL si non trouvé.
 */
char	*ft_strrchr(const char *s, int c)
{
	ssize_t	size;

	size = ft_strlen(s);
	s += size;
	while (size > -1)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		size--;
		s--;
	}
	return (NULL);
}
