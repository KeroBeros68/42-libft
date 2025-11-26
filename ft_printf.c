/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:26:13 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/26 17:58:27 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
