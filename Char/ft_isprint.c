/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:04:23 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:53 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verifies if a character is printable.
 *
 * Returns true if `c` is a printable character
 * (ASCII codes 32 to 126 inclusive).
 *
 * @param c  Character to test.
 *
 * @return int  Non-zero if `c` is printable, 0 otherwise.
 */
int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
