/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_c.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 13:30:14 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/09 13:07:11 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Clear a circular linked list.
 * 
 * Frees all nodes in the circular linked list pointed to by `lst`
 * using the provided `del` function to free the content of each node.
 * After clearing, the pointer to the list is set to NULL.
 * This function is typically used to simplify error handling
 * in functions that create or modify circular lists.
 * @param lst Pointer to the pointer of the circular list to clear.
 * @param del Function used to free the content of each node.
 * @return void
 */
void	ft_lstclear_c(t_list **lst, void (*del)(void *))
{
	if (!lst || !*lst)
		return ;

	while (*lst)
		ft_lstdelone_c(lst, *lst, del);
}
