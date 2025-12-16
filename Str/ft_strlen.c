/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:06:58 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:04:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Calculates the length of a string.
 *
 * Iterates through the string `s` until the null character and returns
 * the number of characters before the '\0'.
 *
 * @param s  String whose length is needed.
 *
 * @return size_t  Length of the string.
 */
size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
