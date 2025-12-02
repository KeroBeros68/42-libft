/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 17:15:28 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/02 15:42:29 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_utils.h"

/**
 * @brief Frees a null-terminated array of strings.
 *
 * Iterates through the array, frees each allocated string,
 * then frees the array itself.
 *
 * @param tab  A null-terminated array of dynamically allocated strings.
 *
 * @return void*  Always returns NULL to allow convenient use in error paths.
 */
void	*ft_free_split(char **tab)
{
	size_t	i;

	if (!tab)
		return (NULL);
	i = 0;
	while (tab[i])
		free(tab[i++]);
	free(tab);
	return (NULL);
}
