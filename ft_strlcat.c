/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:01:30 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/02 12:13:36 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
