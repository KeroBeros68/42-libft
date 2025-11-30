/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpredecessor.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 11:58:58 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 12:34:28 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Finds the predecessor of a node in a circular linked list
 * 
 * Traverses the circular list to find the node whose next pointer
 * points to the given node. This is the predecessor in the circular
 * chain.
 * 
 * @param[in] node The node whose predecessor to find
 * 
 * @return Pointer to the predecessor node
 * @retval NULL if node is NULL or node->next is NULL
 * @retval node itself if it's a single-node list (node->next == node)
 * 
 * @note Time complexity: O(n) where n is the number of nodes
 * @note Assumes the list is properly circular
 * 
 * @warning Will loop infinitely if the list is not circular
 * @warning Does not validate list structure
 * 
 * @see ft_lstdelone_circular
 * @see ft_lst_relink
 */
t_list	*ft_lst_predecessor(t_list *node)
{
	t_list	*current;

	if (!node || !node->next)
		return (NULL);
	current = node->next;
	while (current->next != node)
		current = current->next;
	return (current);
}
