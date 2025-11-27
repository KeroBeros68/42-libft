/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:32:01 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:27:47 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Écrit une chaîne de caractères suivie d'un saut de ligne sur
 * un descripteur de fichier.
 *
 * Envoie la chaîne `s` sur le descripteur `fd`, puis ajoute un '\n' à la fin.
 *
 * @param s   Chaîne de caractères à écrire. Si NULL, ne fait rien.
 * @param fd  Descripteur de fichier où écrire la chaîne.
 *
 * @return ssize_t  Nombre total d'octets écrits (y compris le '\n'),
 * ou -1 en cas d'erreur.
 */
ssize_t	ft_putendl_fd(char *s, int fd)
{
	ssize_t	ret;

	if (!s)
		return (0);
	ret = ft_putstr_fd(s, fd);
	if (ret == -1)
		return (-1);
	if (ft_putchar_fd('\n', fd) == -1)
		return (-1);
	return (ret + 1);
}
