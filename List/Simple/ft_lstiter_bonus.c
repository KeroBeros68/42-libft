/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:34:03 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:47:11 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Iterates over a singly linked list and applies a function to each node's content.
 *
 * This function traverses the list starting at @p lst and applies the
 * function @p f to the content of each node.
 *
 * @param lst  Pointer to the first node of the list.
 * @param f    Function to apply to each node's content.
 *
 * @note If @p lst or @p f is NULL, the function does nothing.
 */
void	ft_lstiter(t_list *lst, void (*f)(void *))
{

	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
