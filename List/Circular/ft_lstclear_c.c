/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:30:14 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:43:25 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Deletes all nodes of a circular linked list.
 *
 * This function clears the entire circular list referenced by @p lst.
 * Each node's content is freed using the @p del callback before the node
 * itself is destroyed. The function handles lists of size 1 as well as
 * multi-node circular lists.
 *
 * @param lst  Address of a pointer to the head of the circular list.
 * @param del  Function used to delete the content of each node.
 *
 * @note If @p lst, @p *lst, or @p del is NULL, no action is performed.
 */
void	ft_lstclear_c(t_list **lst, void (*del)(void *))
{
	t_list	*next;
	t_list	*start;

	if (!lst || !*lst || !del)
		return ;
	if ((*lst)->next == *lst)
	{
		ft_lstdelone_c(lst, *lst, del);
		return ;
	}
	start = *lst;
	*lst = (*lst)->next;
	while ((*lst)->next != start)
	{
		next = (*lst)->next;
		ft_lstdelone_c(lst, *lst, del);
		*lst = next;
	}
	(*lst)->next = *lst;
	ft_lstdelone_c(lst, *lst, del);
	start->next = start;
	ft_lstdelone_c(&start, start, del);
}
