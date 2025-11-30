/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:01:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:45:42 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Adds a new node at the end of a singly linked list.
 *
 * This function appends the node @p new to the end of the list pointed
 * to by @p lst. If the list is empty, @p new becomes the first node.
 *
 * @param lst  Address of a pointer to the first node of the list.
 * @param new  Pointer to the node to add at the end.
 *
 * @note If @p lst or @p new is NULL, the function does nothing.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
