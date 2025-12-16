/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:41:18 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:27 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Concatenates two strings into a new string.
 *
 * Allocates memory to hold `s1` followed by `s2`, then copies
 * both strings into the new memory space.
 *
 * @param s1  First string to concatenate.
 * @param s2  Second string to concatenate.
 *
 * @return char*  Pointer to the newly allocated string,
 * or NULL if an error occurs.
 */
char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	total = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = ft_calloc(total, sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, total);
	ft_strlcat(str, s2, total);
	return (str);
}
