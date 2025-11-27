/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:39:16 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 12:26:09 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applique une fonction à chaque caractère d'une chaîne.
 *
 * Parcourt la chaîne `s` et applique la fonction `f` à chaque caractère,
 * en passant l'index du caractère et un pointeur sur ce caractère.
 *
 * @param s  Chaîne de caractères à parcourir.
 * @param f  Fonction à appliquer à chaque caractère (index, pointeur).
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
