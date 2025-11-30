/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_relink.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 12:04:58 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 12:31:01 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Relinks nodes in a circular list by removing a node from the chain
 * 
 * Updates the previous node's next pointer to skip over the node being deleted,
 * effectively removing it from the circular linked list structure without 
 * freeing memory.
 * 
 * @param prev Pointer to the node that precedes the node to remove
 * @param to_delete Pointer to the node to bypass in the circular chain
 * 
 * @note This function only updates pointers; it does NOT free memory
 * @note Both parameters are checked for NULL before relinking
 * @note After this operation, to_delete is no longer part of the chain
 * 
 * @warning The caller is responsible for freeing to_delete's memory
 * @warning Does nothing if either parameter is NULL
 */
void	ft_lst_relink(t_list *prev, t_list *to_delete)
{
	if (prev && to_delete)
		prev->next = to_delete->next;
}
