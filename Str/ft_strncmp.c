/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 10:49:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:01:36 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Compare deux chaînes de caractères sur au plus n caractères.
 *
 * Parcourt les chaînes `s1` et `s2` et retourne la différence entre
 * le premier octet différent trouvé, ou 0 si les n premiers caractères
 * sont identiques ou si une chaîne se termine avant n.
 *
 * @param s1  Première chaîne à comparer.
 * @param s2  Deuxième chaîne à comparer.
 * @param n   Nombre maximal de caractères à comparer.
 *
 * @return int  Différence entre les octets différents,
 * ou 0 si identiques sur n caractères.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t				i;
	const unsigned char	*sc1 = (const unsigned char	*)s1;
	const unsigned char	*sc2 = (const unsigned char	*)s2;

	i = 0;
	while ((sc1[i] != '\0' || sc2[i] != '\0') && i < n)
	{
		if (sc1[i] != sc2[i])
			return (sc1[i] - sc2[i]);
		i++;
	}
	return (0);
}
