/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:58:34 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 17:01:25 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Safely swap the values of two integers.
 *
 * Exchanges the contents of the two memory locations pointed to by `a` and `b`.
 * If either pointer is NULL, the function performs no operation.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 *
 * @note This function silently ignores invalid (NULL) pointers.
 */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	if (!a || !b)
		return ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
