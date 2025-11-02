/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:01:30 by kebertra          #+#    #+#             */
/*   Updated: 2025/10/29 10:09:00 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	const size_t	size = ft_strlen(dst);

	i = 0;
	if (dstsize < size)
	{
		return (dstsize + ft_strlen(src));
	}
	while (src[i] != '\0' && i < dstsize - size - 1)
	{
		dst[size + i] = src[i];
		i++;
	}
	dst[size + i] = 0;
	return (size + ft_strlen(src));
}
