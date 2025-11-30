/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:11:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:46:02 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Adds a new node at the beginning of a singly linked list.
 *
 * This function inserts the node @p new at the front of the list
 * pointed to by @p lst, making it the new head of the list.
 *
 * @param lst  Address of a pointer to the first node of the list.
 * @param new  Pointer to the node to add at the front.
 *
 * @note If @p lst or @p new is NULL, the function does nothing.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
