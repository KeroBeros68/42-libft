/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:54:17 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 16:56:53 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Compute the absolute value of an integer.
 *
 * Returns the non-negative equivalent of the input integer.
 *
 * @param n The integer to process.
 * @return The absolute value of `n`.
 *
 * @warning For INT_MIN, the returned value is implementation-dependent since
 *          its absolute value cannot be represented in a signed int.
 */
int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
