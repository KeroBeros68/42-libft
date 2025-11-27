/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:50:30 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:17:53 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Compte le nombre d'éléments dans une liste chaînée.
 *
 * Parcourt la liste `lst` et incrémente un compteur pour chaque maillon.
 *
 * @param lst  Premier élément de la liste.
 *
 * @return int  Nombre total d'éléments dans la liste.
 */
int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 1;
	if (!lst)
		return (0);
	while (lst->next)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
