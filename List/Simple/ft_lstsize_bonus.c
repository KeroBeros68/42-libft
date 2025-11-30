/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:50:30 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:49:29 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Counts the number of nodes in a singly linked list.
 *
 * This function traverses the list starting from @p lst and counts
 * the total number of nodes.
 *
 * @param lst  Pointer to the first node of the list.
 *
 * @return The number of nodes in the list. Returns 0 if @p lst is NULL.
 */
size_t	ft_lstsize(t_list *lst)
{
	ssize_t	size;

	size = 0;
	if (!lst)
		return (0);
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
