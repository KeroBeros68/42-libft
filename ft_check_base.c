/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:33:02 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:35:40 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Vérifie la validité d'une base pour la conversion de nombres.
 *
 * Une base est valide si elle contient au moins deux caractères,
 * ne contient ni '+' ni '-', et ne comporte pas de caractères répétés.
 *
 * @param base      Chaîne représentant la base à vérifier.
 * @param len_base  Longueur de la base.
 *
 * @return int  TRUE (1) si la base est valide, FALSE (0) sinon.
 */
int	ft_check_base(const char *base, size_t len_base)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (len_base < 2)
		return (FALSE);
	while (i < len_base)
	{
		if (base[i] == '+' || base[i] == '-')
			return (FALSE);
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j])
				return (FALSE);
			j++;
		}
		i++;
	}
	return (TRUE);
}
