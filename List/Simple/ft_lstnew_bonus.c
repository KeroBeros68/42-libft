/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:24:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:49:08 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Creates a new node for a singly linked list.
 *
 * This function allocates and initializes a new list node. The node's
 * content is set to @p content and its next pointer is set to NULL.
 *
 * @param content  Pointer to the data to store in the new node.
 *
 * @return A pointer to the newly created node, or NULL if allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = ft_calloc(1, sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	return (lst);
}
