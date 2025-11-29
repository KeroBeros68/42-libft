/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:57:46 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 20:57:21 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Return the last node of a linked list.
 *
 * Traverses the list starting from `lst` and returns a pointer to the
 * last node. Supports both standard singly-linked lists and circular
 * lists where the head node is marked with `head == 1`.
 *
 * For singly-linked lists, the last node is the one with `next == NULL`.
 * For circular lists, the last node is the one whose `next` points back
 * to the head node or to a node marked with `head == 1`.
 *
 * @param lst Pointer to the first node of the list.
 *
 * @return Pointer to the last node of the list, or NULL if the list is empty.
 *
 * @note Ensure that for circular lists, exactly one node has `head == 1`
 *       to avoid infinite loops.
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
