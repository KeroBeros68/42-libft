/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:38:19 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:06:02 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Libère entièrement une liste chaînée puis renvoie NULL.
 *
 * Utilise la fonction `del` pour libérer le contenu de chaque élément,
 * puis détruit tous les nœuds via `ft_lstclear`.  
 * Pratique pour centraliser le nettoyage dans les fonctions qui
 * doivent retourner NULL après un échec.
 *
 * @param lst  Adresse du pointeur vers la liste à libérer.
 * @param del  Fonction utilisée pour libérer le contenu de chaque nœud.
 *
 * @return t_list*  Toujours NULL après la libération complète.
 */
static t_list	*clear_and_null(t_list **lst, void (*del)(void *))
{
	ft_lstclear(lst, del);
	return (NULL);
}

/**
 * @brief Crée une nouvelle liste en appliquant une fonction à chaque élément.
 *
 * Parcourt la liste `lst`, applique la fonction `f` au contenu de chaque nœud,
 * et crée une nouvelle liste avec les résultats. Si une allocation échoue
 * ou si `f` retourne NULL, libère tous les éléments déjà créés avec `del`
 * et retourne NULL.
 *
 * @param lst  Liste source à parcourir.
 * @param f    Fonction à appliquer à chaque contenu.
 * @param del  Fonction pour libérer le contenu en cas d'erreur.
 *
 * @return t_list*  Nouvelle liste créée avec les contenus transformés,
 *                  ou NULL si une erreur survient.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*tail;
	t_list	*new;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	tail = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (clear_and_null(&newlst, del));
		new = ft_lstnew(content);
		if (!new)
			return (del(content), clear_and_null(&newlst, del));
		if (!newlst)
			newlst = new;
		else
			tail->next = new;
		tail = new;
		lst = lst->next;
	}
	return (newlst);
}
