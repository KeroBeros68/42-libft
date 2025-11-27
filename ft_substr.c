/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:08:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:33:52 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Extrait une sous-chaîne d'une chaîne donnée.
 *
 * Crée une nouvelle chaîne allouée contenant `len` caractères de `s`
 * à partir de l'index `start`. Si `start` est supérieur à la longueur
 * de `s`, retourne une chaîne vide.
 *
 * @param s      Chaîne source.
 * @param start  Index de départ pour l'extraction.
 * @param len    Nombre de caractères à extraire.
 *
 * @return char*  Nouvelle sous-chaîne allouée, ou NULL en cas d'échec.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	ssize;

	if (!s)
		return (NULL);
	ssize = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (start > ssize)
		return (str);
	ft_strlcpy(str, s + (size_t)start, len + 1);
	return (str);
}
