/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:03:52 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:03:01 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Verifies if a character is a decimal digit.
 *
 * Returns true if `c` is between '0' and '9'.
 *
 * @param c  Character to test.
 *
 * @return int  Non-zero if `c` is a digit, 0 otherwise.
 */
int	ft_isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
