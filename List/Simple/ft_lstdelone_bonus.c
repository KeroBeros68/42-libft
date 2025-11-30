/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:10:56 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:46:51 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Deletes a single node of a singly linked list.
 *
 * This function applies the @p del function to the content of the node
 * @p lst and then frees the node itself.
 *
 * @param lst  Pointer to the node to delete.
 * @param del  Function used to delete the node's content.
 *
 * @note If @p lst is NULL, the function does nothing.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
