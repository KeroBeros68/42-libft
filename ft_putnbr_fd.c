/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:36:19 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:33:30 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Écrit un entier sur le descripteur de fichier donné.
 *
 * Envoie le nombre `n` sur le descripteur `fd`. Gère les nombres négatifs
 * en ajoutant un '-' devant.
 *
 * @param n   Entier à écrire.
 * @param fd  Descripteur de fichier où écrire le nombre.
 *
 * @return ssize_t  Nombre total de caractères écrits, ou -1 en cas d'erreur.
 */
ssize_t	ft_putnbr_fd(int n, int fd)
{
	long int	nbr;
	ssize_t		ret;

	ret = 0;
	nbr = n;
	if (nbr < 0)
	{
		if (ft_putchar_fd('-', fd) == -1)
			return (-1);
		ret++;
		nbr *= -1;
	}
	if (nbr > 9)
		ret += ft_putnbr_fd(nbr / 10, fd);
	if (ft_putchar_fd(nbr % 10 + '0', fd) == -1)
		return (-1);
	return (ret++);
}
