/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:19:40 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:46:31 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Deletes and frees all nodes of a singly linked list.
 *
 * This function iterates through the list pointed to by @p lst, applies
 * the @p del function to each node's content, and frees each node.
 * After execution, the list pointer is set to NULL.
 *
 * @param lst  Address of a pointer to the first node of the list.
 * @param del  Function used to delete the content of each node.
 *
 * @note If @p lst, @p *lst, or @p del is NULL, the function does nothing.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
