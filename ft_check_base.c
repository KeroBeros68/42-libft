/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 15:33:02 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 17:37:16 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
