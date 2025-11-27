/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 17:26:24 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:33:55 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Écrit une chaîne de caractères sur un descripteur de fichier.
 *
 * Envoie la chaîne `s` caractère par caractère sur le descripteur `fd`.
 *
 * @param s   Chaîne de caractères à écrire. Si NULL, ne fait rien.
 * @param fd  Descripteur de fichier où écrire la chaîne.
 *
 * @return ssize_t  Nombre total de caractères écrits,
 * ou -1 en cas d'erreur d'écriture.
 */
ssize_t	ft_putstr_fd(char *s, int fd)
{
	ssize_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0' )
	{
		if (write(fd, &s[i], 1) == -1)
			return (-1);
		i++;
	}
	return (i);
}
