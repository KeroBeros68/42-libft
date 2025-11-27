/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:12:44 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:25:20 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Retourne la plus petite des deux tailles.
 *
 * Compare deux valeurs de type `size_t` et retourne la plus petite.
 *
 * @param a  Première taille à comparer.
 * @param b  Deuxième taille à comparer.
 *
 * @return size_t  La valeur minimale entre `a` et `b`.
 */
size_t	ft_min_size(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}
