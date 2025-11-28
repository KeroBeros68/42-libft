/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:41:18 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:01:16 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Concatène deux chaînes de caractères dans une nouvelle chaîne.
 *
 * Alloue de la mémoire pour contenir `s1` suivi de `s2`, puis copie
 * les deux chaînes dans le nouvel espace mémoire.
 *
 * @param s1  Première chaîne à concaténer.
 * @param s2  Deuxième chaîne à concaténer.
 *
 * @return char*  Pointeur vers la nouvelle chaîne allouée,
 * ou NULL en cas d'échec.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(total, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, total);
	ft_strlcat(str, s2, total);
	return (str);
}
