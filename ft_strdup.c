/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 16:41:34 by kebertra          #+#    #+#             */
/*   Updated: 2025/10/31 19:37:02 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char			*cpy;
	const size_t	size = ft_strlen(src) + 1;

	cpy = ft_calloc(size, sizeof(char));
	if (!cpy)
		return (NULL);
	ft_strlcpy(cpy, src, size);
	return (cpy);
}
