/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:26:13 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 21:32:59 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Écrit une chaîne ou un pointeur en gérant les valeurs NULL
 * pour ft_printf.
 *
 * Pour un spécificateur 's', écrit la chaîne ou "(null)" si NULL.
 * Pour un spécificateur 'p', écrit l'adresse du pointeur au format hexadécimal,
 * ou "(nil)" si NULL.
 *
 * @param args  Liste d'arguments variable issue de va_list.
 * @param c     Spécificateur de format ('s' pour chaîne, 'p' pour pointeur).
 *
 * @return ssize_t  Nombre de caractères écrits,
 * ou -1 en cas d'erreur d'écriture.
 */
static ssize_t	printf_check_null(va_list args, char c)
{
	void	*tmp;
	ssize_t	ret;

	if (c == 'p')
		tmp = va_arg(args, void *);
	else
		tmp = va_arg(args, char *);
	if (!tmp && c == 'p')
		return (ft_putstr_fd("(nil)", 1));
	if (!tmp && c == 's')
		return (ft_putstr_fd("(null)", 1));
	if (c == 's')
		return (ft_putstr_fd((char *)tmp, 1));
	if (ft_putstr_fd("0x", 1) == -1)
		return (-1);
	ret = ft_putnbr_base_u_fd((size_t)tmp, HEX_MIN, 1, 1);
	if (ret == -1)
		return (-1);
	return (ret + 2);
}

/**
 * @brief Traite un spécificateur de format pour ft_printf et écrit le résultat.
 *
 * Selon le caractère de format `c`, récupère l'argument correspondant dans
 * `args` et l'écrit sur la sortie standard.
 *
 * @param args  Liste d'arguments variable issue de va_list.
 * @param c     Spécificateur de format 
 * ('d', 'i', 'u', 'c', 's', 'p', 'x', 'X', '%').
 *
 * @return ssize_t  Nombre de caractères écrits,
 * ou 0 si le spécificateur n'est pas reconnu.
 */
static ssize_t	printf_print_res(va_list args, char c)
{
	ssize_t	ret;

	ret = 0;
	if (c == 'i' || c == 'd')
		ret = ft_putnbr_base_u_fd(va_arg(args, int), DEC, 0, 1);
	else if (c == 'u')
		ret = ft_putnbr_base_u_fd(va_arg(args, unsigned int), DEC, 1, 1);
	else if (c == 'c')
		ret = ft_putchar_fd(va_arg(args, unsigned int), 1);
	else if (c == 's' || c == 'p')
		ret = printf_check_null(args, c);
	else if (c == 'x')
		ret = ft_putnbr_base_u_fd(va_arg(args, unsigned int), HEX_MIN, 1, 1);
	else if (c == 'X')
		ret = ft_putnbr_base_u_fd(va_arg(args, unsigned int), HEX_MAJ, 1, 1);
	else if (c == '%')
		ret = ft_putchar_fd('%', 1);
	return (ret);
}

/**
 * @brief Imprime une chaîne formatée sur la sortie standard.
 *
 * Analyse la chaîne `s` et remplace les spécificateurs de format (%) par
 * les arguments correspondants fournis via la liste `...`.
 *
 * @param s  Chaîne de format contenant du texte et des spécificateurs (%).
 * @param ... Arguments variables correspondant aux spécificateurs dans `s`.
 *
 * @return int  Nombre total de caractères écrits,
 * ou -1 en cas d'erreur d'écriture.
 *
 * @note Fonction similaire à printf, mais limitée aux spécificateurs gérés
 *       par `printf_print_res`.
 */
int	ft_printf(const char *s, ...)
{
	va_list		args;
	ssize_t		i;
	ssize_t		final_len;
	ssize_t		ret;

	va_start(args, s);
	i = -1;
	final_len = 0;
	if (!s || write(1, "", 0) == -1)
		return (-1);
	while (s[++i] != '\0')
	{
		if (s[i] == '%')
			ret = printf_print_res(args, s[++i]);
		else
			ret = ft_putchar_fd(s[i], 1);
		if (ret == -1)
			return (-1);
		final_len += ret;
	}
	va_end(args);
	return (final_len);
}
