/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:19:40 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 22:05:44 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Clear a linked list, freeing all nodes and their content.
 *
 * Iterates through the list pointed to by `lst` and frees each node using
 * `ft_lstdelone`. Works for both linear and circular linked lists. After
 * clearing, the pointer to the list is set to NULL.
 *
 * @param lst Pointer to the pointer of the first node of the list.
 * @param del Function used to free the content of each node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*start;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	start = *lst;
	while (*lst && (*lst != start || start->head == 0))
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
		// après la première suppression, start n'est plus la tête
		start->head = 0;
	}
	*lst = NULL;
}
