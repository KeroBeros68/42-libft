/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 18:23:12 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:14 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Searches for the last occurrence of a character in a string.
 *
 * Iterates through the string `s` from the end and returns a pointer to the
 * last occurrence of `c`. If `c` is '\0', returns a
 * pointer to the final null character.
 *
 * @param s  String to iterate through.
 * @param c  Character to search for.
 *
 * @return char*  Pointer to the last occurrence of `c`,
 * or NULL if not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	ssize_t	size;

	size = ft_strlen(s);
	s += size;
	while (size > -1)
	{
		if (*s == (char)c)
		{
			return ((char *)s);
		}
		size--;
		s--;
	}
	return (NULL);
}
