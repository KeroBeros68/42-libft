/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:30:43 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:53 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Searches for a substring in a string with a length limit.
 *
 * Iterates through the string `big` up to `len` characters and returns a
 * pointer to the first occurrence of `little`. If `little` is
 * an empty string, returns `big`.
 *
 * @param big     String to search in.
 * @param little  Substring to find.
 * @param len     Maximum number of characters to examine in `big`.
 *
 * @return char*  Pointer to the first occurrence of `little` in `big`,
 *                or NULL if not found.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		nb;

	i = 0;
	j = 0;
	if (*little == 0)
		return ((char *)big);
	nb = ft_strlen(little);
	while (big[i] != '\0' && i < len - nb + 1)
	{
		j = ft_strncmp(&big[i], little, nb);
		if (j == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
