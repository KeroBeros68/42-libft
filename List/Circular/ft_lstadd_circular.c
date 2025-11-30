/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_circular.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:17:39 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:43:05 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Inserts a new element at the beginning of a circular linked list.
 *
 * This function adds the node @p new to the front of the circular list
 * pointed to by @p lst. It updates the `head` markers and reconnects the
 * last element so the list remains circular.
 *
 * @param lst  Address of a pointer to the current head of the circular list.
 * @param new  Pointer to the new node to insert.
 *
 * @note If either parameter is NULL, the function performs no action.
 */
void	ft_lstadd_c(t_list **lst, t_list *new)
{
	t_list	*start;
	t_list	*last;

	if (!lst || !new)
		return ;
	new->next = *lst;
	new->head = true;
	start = *lst;
	start->head = false;
	last = *lst;
	while (last->next != start)
		last = last->next;
	last->next = new;
	*lst = new;
}
