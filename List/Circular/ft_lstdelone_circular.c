/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_circular.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:36:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/09 12:22:19 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Deletes a node from a circular doubly linked list.
 *
 * This function removes the specified node from a circular doubly linked list,
 * updates the surrounding links, handles the head pointer if necessary, and
 * frees the node's memory. If a delete function is provided, it is used to
 * free the node's content before the node itself is released.
 *
 * @param head Pointer to the list's head pointer.
 * @param to_delete The node to remove from the list.
 * @param del Optional function used to free the node's content.
 */
void	ft_lstdelone_c(t_list **head, t_list *to_delete,
	void (*del)(void *))
{
	if (!head || !*head || !to_delete)
		return ;
	if (del && to_delete->content)
		del(to_delete->content);
	if (to_delete->next == to_delete)
	{
		*head = NULL;
		free(to_delete);
		return ;
	}
	to_delete->prev->next = to_delete->next;
	to_delete->next->prev = to_delete->prev;
	if (*head == to_delete)
	{
		*head = to_delete->next;
		to_delete->head = false;
		(*head)->head = true;
	}
	to_delete->next = NULL;
	to_delete->prev = NULL;
	free(to_delete);
}
