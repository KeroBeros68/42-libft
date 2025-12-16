/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:03:01 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:01 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verifies if a character is part of the ASCII table.
 *
 * Returns true if `c` is between 0 and 127 inclusive.
 *
 * @param c  Character to test.
 *
 * @return int  Non-zero if `c` is an ASCII character, 0 otherwise.
 */
int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
		return (1);
	return (0);
}
