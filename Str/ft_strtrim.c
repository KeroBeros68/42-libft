/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:52:07 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:01:48 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Supprime les caractères spécifiés au début et à la fin d'une chaîne.
 *
 * Parcourt la chaîne `s1` et retire tous les caractères présents dans `set`
 * au début et à la fin. Retourne une nouvelle chaîne allouée contenant
 * le résultat.
 *
 * @param s1   Chaîne à nettoyer.
 * @param set  Chaîne de caractères à retirer.
 *
 * @return char*  Nouvelle chaîne allouée sans les caractères de `set`
 * en bordure,
 *                ou NULL en cas d'erreur.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_calloc(1, sizeof(char)));
	end--;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}
