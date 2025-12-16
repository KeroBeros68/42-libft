/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:01:58 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:57:16 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns the larger of two integer values.
 *
 * Compares two integers `a` and `b` and returns the one that is the largest.
 *
 * @param a  First integer to compare.
 * @param b  Second integer to compare.
 *
 * @return int  The maximum value between `a` and `b`.
 */
int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
