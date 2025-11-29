/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:10:56 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 21:40:09 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Delete a single node from a linked list.
 *
 * Frees the memory of a single node `lst` and its content using the provided
 * `del` function. For circular lists, if the node being deleted is the head,
 * the next node is marked as the new head. The function does nothing if `lst`
 * is NULL.
 *
 * @param lst Pointer to the node to delete.
 * @param del Function used to free the node's content.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	if (lst->head && lst->next)
		lst->next->head = true;
	free(lst);
}
