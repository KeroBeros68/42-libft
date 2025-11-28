/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:45:47 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 17:56:05 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Alloue de la mémoire et initialise tous les octets à zéro.
 *
 * Alloue un bloc de mémoire de `nmemb * size` octets
 * et le remplit avec des zéros.
 * Vérifie les débordements lors du calcul de la taille totale.
 *
 * @param nmemb  Nombre d'éléments à allouer.
 * @param size   Taille de chaque élément en octets.
 *
 * @return void*  Pointeur vers le bloc mémoire alloué, ou NULL en cas d'échec.
 */
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*result;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	result = malloc(total);
	if (!result)
		return (NULL);
	ft_bzero(result, total);
	return (result);
}
