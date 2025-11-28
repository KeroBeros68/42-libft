/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_u_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:32:09 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:03:47 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Prépare un nombre pour l'écriture en base
 * sur un descripteur de fichier.
 *
 * Convertit le nombre `nbr` en `unsigned long long`
 * et gère le signe si nécessaire.
 * Écrit le signe '-' sur le descripteur `fd` si le nombre est négatif
 * et non non signé.
 *
 * @param u    Indicateur de signe : 0 pour nombre signé, 1 pour non signé.
 * @param n    Pointeur vers la variable où stocker la valeur convertie.
 * @param nbr  Nombre entier à préparer.
 * @param fd   Descripteur de fichier pour l'écriture du signe si nécessaire.
 *
 * @return ssize_t  0 si aucun caractère ajouté, 1 si le '-' a été écrit,
 * -1 en cas d'erreur.
 */
static ssize_t	ftputnbrbase_helper(int u, unsigned long long *n,
	long long nbr, int fd)
{
	if (u == 1)
		*n = (unsigned long long)nbr;
	else if (nbr < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		*n = -(unsigned long long)nbr;
		return (1);
	}
	else
		*n = (unsigned long long)nbr;
	return (0);
}

/**
 * @brief Écrit un nombre entier sur un descripteur de fichier
 * dans une base donnée.
 *
 * Convertit `nbr` en chaîne de caractères selon la base fournie par `base`
 * et l'écrit sur le descripteur `fd`.
 * Gère les nombres négatifs si `u` est non nul.
 *
 * @param nbr   Nombre entier à écrire.
 * @param base  Chaîne représentant les caractères de la base
 * (ex: "0123456789ABCDEF").
 * @param u     Indicateur de signe : 0 pour non signé, 1 pour signé.
 * @param fd    Descripteur de fichier où écrire le nombre.
 *
 * @return ssize_t  Nombre total de caractères écrits, ou -1 en cas d'erreur.
 *
 * @note La fonction vérifie la validité de la base avant conversion.
 */
ssize_t	ft_putnbr_base_u_fd(long long nbr, const char *base,
			const int u, int fd)
{
	unsigned long long	n;
	const size_t		base_len = ft_strlen(base);
	ssize_t				count;
	ssize_t				ret;

	count = 0;
	ret = 0;
	if (!ft_check_base(base, base_len))
		return (-1);
	count += ftputnbrbase_helper(u, &n, nbr, fd);
	if (count == -1)
		return (-1);
	if (n >= base_len)
		ret = ft_putnbr_base_u_fd((long long)(n / base_len), base, 1, fd);
	if (ret == -1)
		return (-1);
	if (ft_putchar_fd(base[n % base_len], fd) == -1)
		return (-1);
	return (count + ret + 1);
}
