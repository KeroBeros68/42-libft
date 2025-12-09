/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:38:19 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/09 11:47:03 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft_list.h"

/**
 * @brief Clear a linked list and return NULL.
 *
 * Frees all nodes in the list pointed to by `lst` using the provided `del`
 * function to free the content of each node. After clearing, the pointer
 * to the list is set to NULL. This function is typically used to simplify
 * error handling in functions that create or modify lists.
 *
 * @param lst Pointer to the pointer of the list to clear.
 * @param del Function used to free the content of each node.
 * @return Always returns NULL.
 */
static t_list	*clear_and_null(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	return (NULL);
}

/**
 * @brief Helper function to create a new node and append it
 * to the end of a list.
 *
 * Allocates a new node with the given `content` and adds it to the back of the
 * list pointed to by `newlst`. If memory allocation fails or `content` is NULL,
 * all previously allocated nodes in `newlst` are freed using `del`,
 * and the function returns NULL.
 *
 * @param newlst Pointer to the pointer of the first node
 * of the list to append to.
 * @param content Pointer to the content to store in the new node.
 * @param del Function used to free the content in case of error.
 * @return Pointer to the newly created node on success, or NULL on failure.
 */
static t_list	*map_add_back(t_list **newlst, void *content,
	void (*del)(void *))
{
	t_list	*new;

	if (!content)
		return (clear_and_null(newlst, del), NULL);
	new = ft_lstnew(content);
	if (!new)
	{
		del(content);
		clear_and_null(newlst, del);
		return (NULL);
	}
	ft_lstadd_back(newlst, new);
	return (new);
}

/**
 * @brief Creates a new list by applying a function to each
 * 	element of an existing list.
 *
 * This function iterates over the list @p lst, applies the function @p f
 * to each node's content, and constructs a new list with the results.
 * If memory allocation fails, the @p del function is used to free
 * allocated content before returning NULL.
 *
 * @param lst  Pointer to the first node of the source list.
 * @param f    Function to apply to each node's content.
 * @param del  Function to delete content in case of allocation failure.
 *
 * @return Pointer to the first node of the new list, or NULL on failure.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	void	*content;

	newlst = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		content = f(lst->content);
		if (!map_add_back(&newlst, content, del))
			return (NULL);
		lst = lst->next;
	}
	return (newlst);
}
