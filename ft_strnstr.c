/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 13:30:43 by kebertra          #+#    #+#             */
/*   Updated: 2025/10/31 16:04:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
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
