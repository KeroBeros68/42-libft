/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:45:47 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 17:56:33 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Réalloue un bloc mémoire en conservant les données existantes.
 *
 * Cette fonction alloue un nouveau bloc mémoire de taille `new_size`, copie
 * les données du bloc original `ptr` (jusqu'à la taille minimale entre
 * `old_size` et `new_size`), puis libère l'ancien bloc.
 *
 * @param ptr       Pointeur vers le bloc mémoire à réallouer. Peut être NULL.
 * @param old_size  Taille actuelle du bloc mémoire pointé par `ptr`.
 * @param new_size  Nouvelle taille souhaitée pour le bloc mémoire.
 *
 * @return void*    Pointeur vers le nouveau bloc mémoire alloué, ou NULL si
 *                  l'allocation échoue ou si `new_size` vaut 0.
 *
 * @note Si `ptr` est NULL, la fonction se comporte comme malloc.
 * @note Si `new_size` est 0, le bloc original est libéré et NULL est retourné.
 */
void	*ft_realloc(void *ptr, const size_t old_size, const size_t new_size)
{
	void	*new_ptr;
	size_t	len;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	len = ft_min_size(old_size, new_size);
	new_ptr = ft_memcpy(new_ptr, ptr, len);
	free(ptr);
	return (new_ptr);
}
