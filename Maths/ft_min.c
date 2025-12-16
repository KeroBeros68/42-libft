/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:45:42 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:57:13 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns the smaller of two integer values.
 *
 * Compares two integers `a` and `b` and returns the one that is the smallest.
 *
 * @param a  First integer to compare.
 * @param b  Second integer to compare.
 *
 * @return int  The minimum value between `a` and `b`.
 */
int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
