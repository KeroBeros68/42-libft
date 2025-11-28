/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:01:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:05:45 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Ajoute un nouvel élément à la fin d'une liste chaînée.
 *
 * Si la liste est vide, le nouvel élément devient le premier.
 * Sinon, la fonction parcourt la liste jusqu'au dernier élément
 * et y attache `new`.
 *
 * @param lst  Adresse du pointeur vers le début de la liste.
 * @param new  Nouvel élément à ajouter à la fin de la liste.
 */
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
