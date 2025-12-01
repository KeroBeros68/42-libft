/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_ret.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:35:37 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/01 14:31:59 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

/**
 * @brief Checks whether all characters in a string satisfy a given predicate.
 *
 * This function iterates through the string @p s and calls the callback @p f
 * for each character. The callback receives the current index and a pointer to
 * the character (as a read-only pointer).  
 * If the callback returns 0 for any character, the iteration stops immediately
 * and the function returns false.  
 * If the callback returns a non-zero value for every character, the function
 * returns true.
 *
 * @param s  The null-terminated string to check. Must not be NULL.
 * @param f  A predicate function taking (index, char pointer). Must not be NULL.
 *           It should return non-zero to continue,
 * 							or 0 to stop and signal failure.
 *
 * @return true  if all characters satisfy the predicate.
 * @return false if @p s or @p f is NULL, or if @p f returns 0 for any character.
 *
 * @note The callback must not modify the string, as it receives a const char*.
 * @note Complexity: O(n).
 */
bool	ft_str_check(char *s, int (*f)(size_t, const char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return (false);
	while (s[i] != '\0')
	{
		if (!f(i, &s[i]))
			return (false);
		i++;
	}
	return (true);
}
