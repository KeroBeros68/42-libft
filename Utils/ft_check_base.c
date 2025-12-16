/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:33:02 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:57:48 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Verifies the validity of a base for number conversion.
 *
 * A base is valid if it contains at least two characters,
 * contains neither '+' nor '-', and has no repeated characters.
 *
 * @param base      String representing the base to verify.
 * @param len_base  Length of the base.
 *
 * @return int  TRUE (1) if the base is valid, FALSE (0) otherwise.
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
