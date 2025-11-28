/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:11:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/28 19:02:43 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Add a new element to the front of a linked list and mark it as head.
 *
 * Inserts `new` at the beginning of the list pointed to by `lst`. Updates
 * the `head` flag: the previous first element is set to false, and the
 * new element is set to true.
 *
 * @param lst  Pointer to the pointer of the first element of the list.
 * @param new  New element to add at the front of the list.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst)
		(*lst)->head = false;
	new->next = *lst;
	*lst = new;
	(*lst)->head = true;
}
