/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:19:40 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:05:50 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Libère et supprime tous les éléments d'une liste chaînée.
 *
 * Parcourt la liste pointée par `lst`, applique la fonction `del`
 * au contenu de chaque élément, puis libère chaque maillon.
 * À la fin, le pointeur de liste est mis à NULL.
 *
 * @param lst  Adresse du pointeur vers le premier élément de la liste.
 * @param del  Fonction utilisée pour libérer le contenu de chaque élément.
 */
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (!lst || !*lst ||!del)
		return ;
	while (*lst != NULL)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
