/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:28:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:28:07 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Copie une chaîne dans une autre en limitant le nombre d'octets.
 *
 * Copie au plus `size - 1` caractères de `src` vers `dst` et termine
 * toujours la chaîne par '\0'. Si `size` vaut 0, aucun caractère n'est copié.
 *
 * @param dst   Chaîne de destination.
 * @param src   Chaîne source à copier.
 * @param size  Taille maximale à copier, incluant le '\0'.
 *
 * @return size_t  Longueur de la chaîne source `src`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
