/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:12:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/02 10:17:07 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countword(char const *s, char c)
{
	size_t	i;
	size_t	word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		word++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (word);
}

static char	**freeall(char **tab, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

static char	**filltab(char **tab, const char *s, char c, size_t nbword)
{
	size_t	count;
	size_t	i;
	size_t	start;

	count = 0;
	start = 0;
	i = 0;
	while (s[i] != '\0' && start == 0 && count < nbword)
	{
		while (s[i] == c)
			i++;
		if (s[i] == '\0')
			break ;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[count] = ft_substr(s, start, i - start);
		if (!tab[count])
			return (freeall(tab, count));
		start = 0;
		count++;
	}
	tab[count] = NULL;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	nbword;

	if (!s)
		return (NULL);
	nbword = countword(s, c);
	tab = ft_calloc(nbword + 1, sizeof(char *));
	if (!tab)
		return (NULL);
	tab = filltab(tab, s, c, nbword);
	return (tab);
}
