/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:10:56 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:16:18 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Supprime un élément d’une liste chaînée.
 *
 * Applique la fonction `del` au contenu du maillon,
 * puis libère le maillon lui-même.
 *
 * @param lst  Élément de liste à supprimer.
 * @param del  Fonction utilisée pour libérer le contenu du maillon.
 */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}
