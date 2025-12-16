/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:52:07 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:39 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Removes specified characters from the beginning and end of a string.
 *
 * Iterates through the string `s1` and removes all characters present in `set`
 * from the beginning and end. Returns a newly allocated string containing
 * the result.
 *
 * @param s1   String to clean.
 * @param set  String of characters to remove.
 *
 * @return char*  Newly allocated string without the characters from `set`
 * on the edges,
 *                or NULL if an error occurs.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	end = ft_strlen(s1);
	if (end == 0)
		return (ft_calloc(1, sizeof(char)));
	end--;
	while (start <= end && ft_strchr(set, s1[start]))
		start++;
	while (end >= start && ft_strchr(set, s1[end]))
		end--;
	len = end - start + 1;
	return (ft_substr(s1, start, len));
}
