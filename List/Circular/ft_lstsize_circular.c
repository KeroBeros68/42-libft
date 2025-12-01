/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_circular.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:04:53 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/01 19:34:57 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libft_list.h"

/**
 * @brief Returns the number of nodes in a circular linked list.
 *
 * This function counts all nodes in the circular list starting from
 * @p lst until it reaches the node marked as the head again.
 *
 * @param lst  Pointer to a node in the circular list.
 *
 * @return The number of nodes in the list. Returns 0 if @p lst is NULL.
 */
size_t	ft_lstsize_c(t_list *lst)
{
	ssize_t	size;
	t_list	*current;

	size = 1;
	current = lst->next;
	if (!lst)
		return (0);
	if ((*lst).next->next == lst)
		return (size);
	while (current != lst)
	{
		size++;
		current = current->next;
	}
	return (size + 1);
}
