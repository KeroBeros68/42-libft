/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 17:11:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:14:43 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Ajoute un élément au début d'une liste chaînée.
 *
 * Place l’élément `new` en tête de la liste pointée par `lst`.
 *
 * @param lst  Adresse du pointeur vers le premier élément de la liste.
 * @param new  Élément à insérer en tête de liste.
 */
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
