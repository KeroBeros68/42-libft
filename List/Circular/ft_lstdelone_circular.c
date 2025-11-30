/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_circular.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:36:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:44:02 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Deletes a single node from a circular linked list.
 *
 * This function removes the node @p to_delete from the circular list
 * referenced by @p head. Its content is destroyed using the @p del
 * callback before the node is freed. The list links and head marker
 * are updated to preserve the circular structure.
 *
 * @param head       Address of a pointer to the head of the circular list.
 * @param to_delete  Pointer to the node that must be removed.
 * @param del        Function used to delete the node's content.
 *
 * @note If @p head, @p *head, or @p to_delete is NULL,
 * the function does nothing.
 */

void	ft_lstdelone_c(t_list **head, t_list *to_delete,
	void (*del)(void *))
{
	t_list	*prev;

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
	prev = ft_lst_predecessor(to_delete);
	ft_lst_relink(prev, to_delete);
	if (*head == to_delete)
	{
		*head = to_delete->next;
		ft_lsthead_update(*head);
	}
	free(to_delete);
}
