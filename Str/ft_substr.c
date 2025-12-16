/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 18:08:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:57:35 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Extracts a substring from a given string.
 *
 * Creates a newly allocated string containing `len` characters from `s`
 * starting at index `start`. If `start` is greater than the length
 * of `s`, returns an empty string.
 *
 * @param s      Source string.
 * @param start  Starting index for extraction.
 * @param len    Number of characters to extract.
 *
 * @return char*  Newly allocated substring, or NULL if an error occurs.
 */
char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	ssize;

	if (!s)
		return (NULL);
	ssize = ft_strlen(s);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (start > ssize)
		return (str);
	ft_strlcpy(str, s + (size_t)start, len + 1);
	return (str);
}
