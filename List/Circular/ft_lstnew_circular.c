/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_circular.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:24:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/09 13:01:12 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
  * @brief Creates a new node for a circular linked list.
  *
  * This function allocates and initializes a new circular list node.
  * The node's content is set to @p content, its `head` flag is cleared,
  * and its `next` pointer points to itself to form a valid single-node
  * circular list.
  * @param content  Pointer to the data to store in the new node.
  * @return A pointer to the newly created node, or NULL if allocation fails.
  */
t_list	*ft_lstnew_c(void *content)
{
	t_list	*lst;

	lst = ft_calloc(1, sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->head = false;
	lst->next = lst;
	lst->prev = lst;
	return (lst);
}
