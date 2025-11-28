/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:01:30 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:01:21 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Concatène une chaîne à la fin d'une autre en limitant la taille totale.
 *
 * Ajoute la chaîne `src` à la fin de `dst`, en s'assurant que la taille
 * totale n'excède pas `size`. Termine toujours la chaîne résultante par '\0'.
 *
 * @param dst   Chaîne de destination.
 * @param src   Chaîne source à ajouter.
 * @param size  Taille maximale de la chaîne résultante, incluant le '\0'.
 *
 * @return size_t  Longueur totale de la chaîne qu'on a voulu créer
 *                 (longueur initiale de dst + longueur de src).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	const size_t	dstsize = ft_strlen(dst);

	i = 0;
	if (size <= dstsize)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] != '\0' && i < size - dstsize - 1)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = 0;
	return (dstsize + ft_strlen(src));
}
