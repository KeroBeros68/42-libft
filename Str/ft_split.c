/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 13:12:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/27 18:04:46 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Compte le nombre de mots dans une chaîne séparés par un délimiteur.
 *
 * Parcourt la chaîne `s` et compte le nombre de segments non vides
 * séparés par le caractère `c`.
 *
 * @param s  Chaîne de caractères à analyser.
 * @param c  Caractère délimiteur des mots.
 *
 * @return size_t  Nombre de mots trouvés dans la chaîne.
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
 * @brief Libère un tableau de chaînes de caractères.
 *
 * Parcourt le tableau `tab` et libère chaque chaîne jusqu'à `count`,
 * puis libère le tableau lui-même.
 *
 * @param tab    Tableau de chaînes à libérer.
 * @param count  Nombre de chaînes à libérer.
 *
 * @return char**  Toujours NULL, pour simplifier la gestion d'erreur.
 */
static char	**freeall(char **tab, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
		free(tab[i++]);
	free(tab);
	return (NULL);
}

/**
 * @brief Remplit un tableau de chaînes à partir d'une chaîne source.
 *
 * Découpe la chaîne `s` en mots séparés par le caractère `c` et
 * stocke chaque mot dans le tableau `tab`. Si une allocation échoue,
 * libère tout et retourne NULL.
 *
 * @param tab      Tableau de chaînes à remplir.
 * @param s        Chaîne source à découper.
 * @param c        Caractère délimiteur des mots.
 * @param nbword   Nombre de mots à extraire.
 *
 * @return char**  Tableau rempli de chaînes ou NULL en cas d'erreur.
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
			return (freeall(tab, count));
		start = 0;
		count++;
	}
	tab[count] = NULL;
	return (tab);
}

/**
 * @brief Découpe une chaîne en un tableau de mots selon un délimiteur.
 *
 * Alloue un tableau de chaînes et y stocke les mots extraits de `s`,
 * séparés par le caractère `c`. Le tableau est terminé par un pointeur NULL.
 *
 * @param s  Chaîne de caractères à découper.
 * @param c  Caractère délimiteur des mots.
 *
 * @return char**  Tableau de chaînes alloué, ou NULL en cas d'erreur.
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
