/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 21:01:58 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:26:00 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Retourne la plus grande des deux valeurs entières.
 *
 * Compare deux entiers `a` et `b` et retourne celui qui est le plus grand.
 *
 * @param a  Premier entier à comparer.
 * @param b  Deuxième entier à comparer.
 *
 * @return int  La valeur maximale entre `a` et `b`.
 */
int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
