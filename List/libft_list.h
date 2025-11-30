/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:13:46 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 14:49:42 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_LIST_H
# define LIBFT_LIST_H

# include "../libft.h"

//##### Struct #####//
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
	bool			head;
}	t_list;

//##### Function #####//

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
size_t	ft_lstsize(t_list *lst);

//##### Circular #####//
t_list	*ft_lst_predecessor(t_list *node);
t_list	*ft_lstnew_c(void *content);
void	ft_lst_relink(t_list *prev, t_list *to_delete);
void	ft_lsthead_update(t_list *new_head);
void	ft_lstdelone_c(t_list **head, t_list *to_delete, void (*del)(void *));
void	ft_lstclear_c(t_list **lst, void (*del)(void *));
void	ft_lstadd_c(t_list **lst, t_list *new);
size_t	ft_lstsize_c(t_list *lst);

#endif