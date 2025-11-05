/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convertbase.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:32:09 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/05 21:07:55 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*convert_base(const char *base, unsigned long nbr,
		size_t len, size_t len_base)
{
	char	*s;

	if (nbr == 0)
	{
		s = ft_calloc(2, sizeof(char));
		if (!s)
			return (NULL);
		s[0] = '0';
		return (s);
	}
	s = ft_calloc(len + 1, sizeof(char));
	if (!s)
		return (NULL);
	s[len] = '\0';
	while (len-- != 0)
	{
		s[len] = base[nbr % len_base];
		nbr /= len_base;
	}
	return (s);
}

static int	base_valid(const char *base, size_t len_base)
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

char	*ft_convert_base(unsigned long nbr, const char *base)
{
	size_t			len_base;
	size_t			len;
	unsigned long	nb_cpy;

	nb_cpy = nbr;
	len = 0;
	if (!base)
		return (NULL);
	len_base = ft_strlen(base);
	if (!base_valid(base, len_base))
		return (NULL);
	while (nb_cpy != 0)
	{
		len++;
		nb_cpy /= len_base;
	}
	return (convert_base(base, nbr, len, len_base));
}
