/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:01:30 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:38 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Concatenates a string to the end of another while limiting total size.
 *
 * Appends the string `src` to the end of `dst`, ensuring that the total size
 * does not exceed `size`. Always terminates the resulting string with '\0'.
 *
 * @param dst   Destination string.
 * @param src   Source string to append.
 * @param size  Maximum size of the resulting string, including the '\0'.
 *
 * @return size_t  Total length of the string we wanted to create
 *                 (initial length of dst + length of src).
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			i;
	const size_t	dstsize = ft_strlen(dst);

	i = 0;
	if (size <= dstsize)
	{
		return (size + ft_strlen(src));
	}
	while (src[i] != '\0' && i < size - dstsize - 1)
	{
		dst[dstsize + i] = src[i];
		i++;
	}
	dst[dstsize + i] = 0;
	return (dstsize + ft_strlen(src));
}
