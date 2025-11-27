/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:18:48 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:42:01 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Contraint un nombre long à la plage des entiers.
 *
 * Si `nb` est inférieur à INT_MIN, retourne INT_MIN.
 * Si `nb` est supérieur à INT_MAX, retourne INT_MAX.
 * Sinon, retourne `nb` converti en int.
 *
 * @param nb  Nombre long à contraindre.
 *
 * @return int  Valeur contrainte dans la plage [INT_MIN, INT_MAX].
 */
static int	clamp_to_int_range(long nb)
{
	if (nb < INT_MIN)
		return (INT_MIN);
	if (nb > INT_MAX)
		return (INT_MAX);
	return (nb);
}

/**
 * @brief Convertit une chaîne de caractères en entier.
 *
 * Ignore les espaces et les caractères de contrôle initiaux, puis
 * interprète un signe optionnel '+' ou '-'. Convertit ensuite la
 * suite de chiffres en entier.
 *
 * @param nptr  Chaîne de caractères à convertir.
 *
 * @return int  Valeur entière correspondante à la chaîne.
 *
 * @note La fonction utilise `clamp_to_int_range` pour gérer les dépassements.
 */
int	ft_atoi(const char *nptr)
{
	int		i;
	long	ret;
	int		sign;

	i = 0;
	ret = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		ret = ret * 10 + (nptr[i] - '0');
		i++;
	}
	return (clamp_to_int_range(ret * sign));
}
