/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:18:13 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:01:33 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Applique une fonction à chaque caractère d'une chaîne
 * et retourne une nouvelle chaîne.
 *
 * Parcourt la chaîne `s`, applique la fonction `f` à chaque caractère
 * (en lui passant l'index et le caractère) et retourne une nouvelle chaîne
 * contenant les résultats.
 *
 * @param s  Chaîne de caractères à transformer.
 * @param f  Fonction à appliquer à chaque caractère (index, caractère).
 *
 * @return char*  Nouvelle chaîne résultante, ou NULL en cas d'échec.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (str[i] != '\0')
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}
