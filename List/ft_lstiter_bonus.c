/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:34:03 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:05:55 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Applique une fonction à chaque élément d'une liste chaînée.
 *
 * Parcourt la liste `lst` et exécute la fonction `f` sur le contenu
 * de chaque maillon.
 *
 * @param lst  Liste chaînée à parcourir.
 * @param f    Fonction à appliquer au contenu de chaque élément.
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
