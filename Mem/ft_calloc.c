/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:45:47 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:04:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Allocates memory and initializes all bytes to zero.
 *
 * Allocates a memory block of `nmemb * size` bytes
 * and fills it with zeros.
 * Checks for overflow when calculating the total size.
 *
 * @param nmemb  Number of elements to allocate.
 * @param size   Size of each element in bytes.
 *
 * @return void*  Pointer to the allocated memory block, or NULL if error.
 */
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
