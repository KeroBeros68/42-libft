/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:57:46 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:47:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Returns the last node of a circular or singly linked list.
 *
 * This function traverses the list starting from @p lst and returns
 * the last node. For circular lists, it stops at the node whose next
 * points back to the start or whose `head` flag is set. For singly
 * linked lists, it stops at the node whose next is NULL.
 *
 * @param lst  Pointer to a node in the list.
 *
 * @return Pointer to the last node, or NULL if @p lst is NULL.
 */
t_list	*ft_lstlast(t_list *lst)
{
	t_list	*start;

	if (!lst)
		return (NULL);
	start = lst;
	while (lst->next && lst->next != start && lst->next->head != 1)
		lst = lst->next;
	return (lst);
}
