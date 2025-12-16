/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:18:13 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:29 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Applies a function to each character of a string
 * and returns a new string.
 *
 * Iterates through the string `s`, applies the function `f` to each character
 * (passing it the index and the character) and returns a new string
 * containing the results.
 *
 * @param s  String to transform.
 * @param f  Function to apply to each character (index, character).
 *
 * @return char*  New resulting string, or NULL if an error occurs.
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
