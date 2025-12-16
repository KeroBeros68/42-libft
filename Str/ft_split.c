/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:12:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:57:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Counts the number of words in a string separated by a delimiter.
 *
 * Iterates through the string `s` and counts the number of non-empty segments
 * separated by the character `c`.
 *
 * @param s  String to analyze.
 * @param c  Word delimiter character.
 *
 * @return size_t  Number of words found in the string.
 */
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

/**
 * @brief Fills a string array from a source string.
 *
 * Splits the string `s` into words separated by the character `c` and
 * stores each word in the array `tab`. If an allocation fails,
 * frees everything and returns NULL.
 *
 * @param tab      String array to fill.
 * @param s        Source string to split.
 * @param c        Word delimiter character.
 * @param nbword   Number of words to extract.
 *
 * @return char**  Filled string array or NULL if an error occurs.
 */
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
			return (ft_free_split(tab));
		start = 0;
		count++;
	}
	tab[count] = NULL;
	return (tab);
}

/**
 * @brief Splits a string into a word array according to a delimiter.
 *
 * Allocates a string array and stores words extracted from `s`,
 * separated by the character `c`. The array is terminated by a NULL pointer.
 *
 * @param s  String to split.
 * @param c  Word delimiter character.
 *
 * @return char**  Allocated string array, or NULL if an error occurs.
 */
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
