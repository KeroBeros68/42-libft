/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:02:29 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:34:38 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Remplit un bloc mémoire avec des zéros.
 *
 * Écrit `n` octets à valeur 0 dans la zone mémoire pointée par `s`.
 *
 * @param s  Pointeur vers le bloc mémoire à remplir.
 * @param n  Nombre d'octets à mettre à zéro.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
