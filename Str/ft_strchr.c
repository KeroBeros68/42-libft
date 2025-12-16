/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:09:47 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:13 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Searches for the first occurrence of a character in a string.
 *
 * Iterates through the string `s` and returns a pointer to the first occurrence
 * of `c`. If `c` is '\0', returns a pointer to the final null character.
 *
 * @param s  String to iterate through.
 * @param c  Character to search for.
 *
 * @return char*  Pointer to the first occurrence of `c`,
 * or NULL if not found.
 */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == (char)c)
	{
		return ((char *)s);
	}
	return (NULL);
}
