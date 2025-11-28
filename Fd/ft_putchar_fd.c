/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:17:23 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:03:37 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Écrit un caractère sur le descripteur de fichier donné.
 *
 * Envoie le caractère `c` vers le descripteur de fichier `fd`.
 *
 * @param c   Caractère à écrire.
 * @param fd  Descripteur de fichier où écrire le caractère.
 *
 * @return ssize_t  Nombre d'octets écrits (1 si succès, -1 si erreur).
 */
ssize_t	ft_putchar_fd(char c, int fd)
{
	return (write(fd, &c, 1));
}
