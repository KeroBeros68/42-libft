/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:01:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 22:05:20 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Add a node at the end of a linked list (linear or circular).
 *
 * Appends the node `new` at the end of the list pointed to by `lst`.
 * If the list is circular (detected via `head`), the new node will point
 * back to the first node to maintain the circular structure. If linear,
 * `new->next` will be NULL.
 *
 * @param lst Pointer to the pointer of the first node of the list.
 * @param new Node to append at the end.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	int		circular;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		new->next = NULL;
		new->head = true;
		return ;
	}
	last = *lst;
	circular = 0;
	while (last->next && !last->next->head)
		last = last->next;
	if (last->next && last->next->head)
		circular = 1;
	last->next = new;
	new->head = false;
	if (circular)
		new->next = *lst;
	else
		new->next = NULL;
}
