/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_circular.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:17:39 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/09 12:02:13 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Insert a node at the head of a circular doubly-linked list.
 *
 * This function inserts the node \p new before the current head of the list
 * referenced by \p *lst and makes \p new the new head. If the list is empty
 * (\p *lst == NULL), the node becomes the sole element and points to itself
 * for both next and prev.
 *
 * Preconditions:
 * - \p new must be a valid, standalone node (preferably created/initialized by
 *   the list constructor). Its next/prev pointers may be overwritten by this
 *   function.
 * - \p lst must be a valid pointer to a list head pointer.
 *
 * Postconditions:
 * - Exactly one node in the list has the head flag set to true (the newly
 *   inserted node).
 * - The circular doubly-linked invariants hold:
 *     node->next->prev == node and node->prev->next == node for every node.
 *
 * @param lst Pointer to the list head pointer. On return, *lst points to the
 *            newly inserted head node.
 * @param new  Node to insert. On success, this node becomes the head of the
 *             list.
 *
 * @note The function is defensive for the empty list case and will initialize
 *       the node to point to itself when creating a single-element circular
 *       list. It does not check whether \p new already belongs to another list.
 */

void	ft_lstadd_c(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
	{
		new->next = new;
		new->prev = new;
		new->head = true;
		*lst = new;
		return ;
	}
	new->next = *lst;
	new->prev = (*lst)->prev;
	new->prev->next = new;
	new->next->prev = new;
	(*lst)->head = false;
	new->head = true;
	*lst = new;
}
