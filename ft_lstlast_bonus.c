/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:57:46 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:17:20 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Retourne le dernier élément d'une liste chaînée.
 *
 * Parcourt la liste jusqu’au dernier maillon et le retourne.
 *
 * @param lst  Première élément de la liste.
 *
 * @return t_list*  Dernier élément de la liste, ou NULL si la liste est vide.
 */
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
