/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:30:43 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:31:26 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Recherche une sous-chaîne dans une chaîne avec une limite de longueur.
 *
 * Parcourt la chaîne `big` jusqu'à `len` caractères et retourne un
 * pointeur vers la première occurrence de `little`. Si `little` est
 * une chaîne vide, retourne `big`.
 *
 * @param big     Chaîne dans laquelle chercher.
 * @param little  Sous-chaîne à trouver.
 * @param len     Nombre maximal de caractères à examiner dans `big`.
 *
 * @return char*  Pointeur vers la première occurrence de `little` dans `big`,
 *                ou NULL si non trouvée.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		nb;

	i = 0;
	j = 0;
	if (*little == 0)
		return ((char *)big);
	nb = ft_strlen(little);
	while (big[i] != '\0' && i < len - nb + 1)
	{
		j = ft_strncmp(&big[i], little, nb);
		if (j == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
