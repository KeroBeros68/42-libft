/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:41:34 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:26 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Duplicates a string.
 *
 * Allocates memory for a new string and copies the content
 * from `s` into it, including the final null character.
 *
 * @param s  Source string to duplicate.
 *
 * @return char*  Pointer to the newly allocated string,
 * or NULL if an error occurs.
 */
char	*ft_strdup(const char *s)
{
	char			*cpy;
	const size_t	size = ft_strlen(s) + 1;

	cpy = ft_calloc(size, sizeof(char));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, s, size);
	return (cpy);
}
