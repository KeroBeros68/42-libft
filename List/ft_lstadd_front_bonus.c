/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:11:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/28 18:42:18 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Add a new element to the front of a linked list and update head flags.
 *
 * Inserts `new` at the beginning of the list pointed to by `lst`. Updates
 * the `head` field of the previous first element and the new element
 * to indicate the current head of the list.
 *
 * @param lst  Pointer to the pointer of the first element of the list.
 * @param new  New element to add at the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*lst)->head = false;
	new->next = *lst;
	*lst = new;
	(*lst)->head = true;
}
