/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:19:40 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/02 12:15:02 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*now;
	t_list	*next;

	if (!lst || !del)
		return ;
	now = *lst;
	while (now != NULL)
	{
		next = now->next;
		del(now->content);
		free(now);
		now = next;
	}
	*lst = NULL;
}
