/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:45:47 by kebertra          #+#    #+#             */
/*   Updated: 2025/10/30 14:27:21 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*result;

	total = nmemb * size;
	if (size != 0 && total / size != nmemb)
		return (NULL);
	result = malloc(total);
	if (!result)
		return (NULL);
	ft_bzero(result, total);
	return (result);
}
