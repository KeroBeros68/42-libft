/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:34:03 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 21:05:15 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Apply a function to each element of a linked list.
 *
 * Iterates through the list starting from `lst` and applies the function `f`
 * to the content of each node. Supports both standard singly-linked lists
 * and circular lists where the head node is marked with `head == 1`.
 *
 * @param lst Pointer to the first node of the list.
 * @param f Function to apply to the content of each node.
 *
 * @pre For circular lists, exactly one node should have head == 1
 *      to avoid infinite loops.
 *
 * @note The function does nothing if `lst` or `f` is NULL.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*start;

	if (!lst || !f)
		return ;
	start = lst;
	while (lst->next && lst->next != start && lst->next->head != 1)
	{
		f(lst->content);
		lst = lst->next;
	}
	f(lst->content);
}
