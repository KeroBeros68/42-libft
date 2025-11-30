/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsthead_update.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 12:07:31 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:44:39 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Updates the head marker of all nodes in a circular linked list.
 *
 * This function iterates through the circular list starting at @p new_head
 * and clears the `head` flag on every node. It then sets the `head` flag
 * on @p new_head to mark it as the new list head.
 *
 * @param new_head  Pointer to the node that should become the new head.
 *
 * @note If @p new_head is NULL, no action is taken.
 */
void	ft_lsthead_update(t_list *new_head)
{
	t_list	*current;

	if (!new_head)
		return ;
	current = new_head->next;
	while (current != new_head)
	{
		current->head = false;
		current = current->next;
	}
	new_head->head = true;
}
