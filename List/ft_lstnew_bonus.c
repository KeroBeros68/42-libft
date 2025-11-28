/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 16:24:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/28 18:42:44 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Create a new linked list element.
 *
 * Allocates and initializes a new `t_list` node with the given `content`.
 * The `next` pointer is set to NULL and the `head` flag is set to false.
 *
 * @param content  Pointer to the content to store in the new node.
 *
 * @return t_list*  Pointer to the newly created node,
 * or NULL if allocation fails.
 */
t_list	*ft_lstnew(void *content)
{
	t_list	*lst;

	lst = ft_calloc(1, sizeof(t_list));
	if (!lst)
		return (NULL);
	lst->content = content;
	lst->next = NULL;
	lst->head = false;
	return (lst);
}
