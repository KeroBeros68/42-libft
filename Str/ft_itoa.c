/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:50:59 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:08:30 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Compte le nombre de chiffres d'un entier.
 *
 * Calcule combien de caractères sont nécessaires pour représenter
 * l'entier `n` en base 10, sans tenir compte du signe.
 *
 * @param n  Entier dont on veut connaître le nombre de chiffres.
 *
 * @return size_t  Nombre de chiffres de `n`.
 */
static size_t	countchar(int n)
{
	size_t	count;

	count = 1;
	while (n / 10 != 0)
	{
		count++;
		n /= 10;
	}
	return (count);
}

/**
 * @brief Remplit une chaîne avec la représentation décimale d'un entier.
 *
 * Place les chiffres de `n` dans la chaîne `s`, en partant de la fin.
 * Si `sign` est non nul, ajoute un '-' au début de la chaîne.
 *
 * @param s      Chaîne dans laquelle écrire le nombre.
 * @param n      Entier à convertir.
 * @param count  Nombre total de caractères représentant le nombre (hors '\0').
 * @param sign   Indique si le nombre est négatif (1) ou non (0).
 */
static void	setnum(char *s, int n, size_t count, int sign)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		if (sign)
		{
			s[0] = '-';
			s[count - i] = n % 10 + '0';
		}
		else
			s[count - i - 1] = n % 10 + '0';
		n = n / 10;
		i++;
	}
}

/**
 * @brief Convertit un entier en chaîne de caractères.
 *
 * Gère le cas particulier de INT_MIN, détermine le signe, calcule le
 * nombre de chiffres nécessaires et remplit la chaîne résultat.
 *
 * @param n  Entier à convertir en chaîne.
 *
 * @return char*  Chaîne représentant l'entier, ou NULL en cas d'échec
 *                d'allocation.
 */
char	*ft_itoa(int n)
{
	char	*s;
	size_t	count;
	int		sign;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	count = countchar(n);
	s = ft_calloc(count + sign + 1, sizeof(char));
	if (!s)
		return (NULL);
	setnum(s, n, count, sign);
	return (s);
}
