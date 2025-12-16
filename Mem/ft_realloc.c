/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:45:47 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:59 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Reallocates a memory block while preserving existing data.
 *
 * This function allocates a new memory block of size `new_size`, copies
 * data from the original block `ptr` (up to the minimum size between
 * `old_size` and `new_size`), then frees the old block.
 *
 * @param ptr       Pointer to the memory block to reallocate. Can be NULL.
 * @param old_size  Current size of the memory block pointed to by `ptr`.
 * @param new_size  Desired new size for the memory block.
 *
 * @return void*    Pointer to the newly allocated memory block, or NULL if
 *                  allocation fails or if `new_size` is 0.
 *
 * @note If `ptr` is NULL, the function behaves like malloc.
 * @note If `new_size` is 0, the original block is freed and NULL is returned.
 */
void	*ft_realloc(void *ptr, const size_t old_size, const size_t new_size)
{
	void	*new_ptr;
	size_t	len;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);
	len = ft_min_size(old_size, new_size);
	new_ptr = ft_memcpy(new_ptr, ptr, len);
	free(ptr);
	return (new_ptr);
}
