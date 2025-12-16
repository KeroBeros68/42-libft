/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:01:08 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:47 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verifies if a character is alphabetic.
 *
 * Returns true if `c` is an uppercase letter (A-Z) or lowercase letter (a-z).
 *
 * @param c  Character to test.
 *
 * @return int  Non-zero if `c` is alphabetic, 0 otherwise.
 */
int	ft_isalpha(int c)
{
	if (c < 'A' || c > 'z' || (c > 'Z' && c < 'a'))
		return (0);
	return (1);
}
