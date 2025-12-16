/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 09:28:10 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:28 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Copies a string into another while limiting the number of bytes.
 *
 * Copies at most `size - 1` characters from `src` to `dst` and always
 * terminates the string with '\0'. If `size` is 0, no character is copied.
 *
 * @param dst   Destination string.
 * @param src   Source string to copy.
 * @param size  Maximum size to copy, including the '\0'.
 *
 * @return size_t  Length of the source string `src`.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!size)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}
