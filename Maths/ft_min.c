/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 20:45:42 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:25:26 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Retourne la plus petite des deux valeurs entières.
 *
 * Compare deux entiers `a` et `b` et retourne celui qui est le plus petit.
 *
 * @param a  Premier entier à comparer.
 * @param b  Deuxième entier à comparer.
 *
 * @return int  La valeur minimale entre `a` et `b`.
 */
int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
