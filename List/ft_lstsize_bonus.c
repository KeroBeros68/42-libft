/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:50:30 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 21:01:58 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Count the number of nodes in a linked list.
 *
 * Traverses the list starting from `lst` and returns the total number
 * of nodes. Supports both standard singly-linked lists and circular
 * lists where the head node is marked with `head == 1`.
 *
 * For singly-linked lists, the size is the number of nodes until `next == NULL`.
 * For circular lists, the size is the number of nodes until the next node
 * points back to the head node or a node marked with `head == 1`.
 *
 * @param lst Pointer to the first node of the list.
 *
 * @return The number of nodes in the list. Returns 0 if the list is empty.
 *
 * @note Ensure that for circular lists, exactly one node has `head == 1`
 *       to avoid infinite loops.
 */
size_t	ft_lstsize(t_list *lst)
{
	t_list	*start;
	ssize_t	size;

	size = 1;
	if (!lst)
		return (0);
	start = lst;
	while (lst->next && lst->next != start && lst->next->head != 1)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
