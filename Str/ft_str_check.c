/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:35:37 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/01 14:41:36 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_string.h"

/**
 * @brief Checks whether all characters in a string satisfy a given predicate.
 *
 * This function iterates through the null-terminated string @p s and applies
 * the predicate function @p f to each character. The predicate receives the
 * character by value and should return a non-zero value if the character is
 * considered valid, or 0 if the character is invalid.
 *
 * The iteration stops immediately when @p f returns 0 for any character, and
 * the function returns false. If @p f returns a non-zero value for every
 * character in the string, the function returns true.
 *
 * @param s  The string to validate. Must not be NULL.
 * @param f  A predicate function applied to each character. Must return
 *           non-zero to continue or 0 to signal failure. Must not be NULL.
 *
 * @return true  if all characters satisfy the predicate.
 * @return false if @p s or @p f is NULL, or if @p f returns 0 for any character.
 *
 * @note This function does not modify the input string.
 * @note Complexity: O(n).
 */
bool	ft_str_check(char *s, int (*f)(int))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return (false);
	while (s[i] != '\0')
	{
		if (!f(s[i]))
			return (false);
		i++;
	}
	return (true);
}
