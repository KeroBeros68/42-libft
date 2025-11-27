/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:41:34 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:52:09 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Duplique une chaîne de caractères.
 *
 * Alloue de la mémoire pour une nouvelle chaîne et copie le contenu
 * de `s` dedans, y compris le caractère nul final.
 *
 * @param s  Chaîne de caractères source à dupliquer.
 *
 * @return char*  Pointeur vers la nouvelle chaîne allouée,
 * ou NULL en cas d'échec.
 */
char	*ft_strdup(const char *s)
{
	char			*cpy;
	const size_t	size = ft_strlen(s) + 1;

	cpy = ft_calloc(size, sizeof(char));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, size);
	return (cpy);
}
