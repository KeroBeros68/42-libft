/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 11:26:13 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 17:56:43 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Writes a string or pointer, handling NULL values for ft_printf.
 *
 * For a 's' specifier, writes the string or "(null)" if NULL.
 * For a 'p' specifier, writes the pointer address in hexadecimal format,
 * or "(nil)" if NULL.
 *
 * @param args  Variable argument list from va_list.
 * @param c     Format specifier ('s' for string, 'p' for pointer).
 *
 * @return ssize_t  Number of characters written,
 * or -1 if a write error occurs.
 */
static ssize_t	printf_check_null(va_list args, char c, int fd)
{
	void	*tmp;
	ssize_t	ret;

	if (c == 'p')
		tmp = va_arg(args, void *);
	else
		tmp = va_arg(args, char *);
	if (!tmp && c == 'p')
		return (ft_putstr_fd("(nil)", fd));
	if (!tmp && c == 's')
		return (ft_putstr_fd("(null)", fd));
	if (c == 's')
		return (ft_putstr_fd((char *)tmp, fd));
	if (ft_putstr_fd("0x", fd) == -1)
		return (-1);
	ret = ft_putnbr_base_u_fd((size_t)tmp, HEX_MIN, 1, fd);
	if (ret == -1)
		return (-1);
	return (ret + 2);
}

/**
 * @brief Processes a format specifier for ft_printf and writes the result.
 *
 * Based on the format character `c`, retrieves the corresponding argument from
 * `args` and writes it to standard output.
 *
 * @param args  Variable argument list from va_list.
 * @param c     Format specifier
 * ('d', 'i', 'u', 'c', 's', 'p', 'x', 'X', '%').
 *
 * @return ssize_t  Number of characters written,
 * or 0 if the specifier is not recognized.
 */
static ssize_t	printf_print_res(va_list args, char c, int fd)
{
	ssize_t	ret;

	ret = 0;
	if (c == 'i' || c == 'd')
		ret = ft_putnbr_base_u_fd(va_arg(args, int), DEC, 0, fd);
	else if (c == 'u')
		ret = ft_putnbr_base_u_fd(va_arg(args, unsigned int), DEC, 1, fd);
	else if (c == 'c')
		ret = ft_putchar_fd(va_arg(args, unsigned int), fd);
	else if (c == 's' || c == 'p')
		ret = printf_check_null(args, c, fd);
	else if (c == 'x')
		ret = ft_putnbr_base_u_fd(va_arg(args, unsigned int), HEX_MIN, 1, fd);
	else if (c == 'X')
		ret = ft_putnbr_base_u_fd(va_arg(args, unsigned int), HEX_MAJ, 1, fd);
	else if (c == '%')
		ret = ft_putchar_fd('%', fd);
	return (ret);
}

/**
 * @brief Formatted output to a given file descriptor.
 *
 * This function behaves similarly to a simplified printf, writing formatted
 * output to the file descriptor @p fd. It parses the format string @p s,
 * handles conversion specifiers using printf_print_res(), and writes
 * characters or formatted data through ft_putchar_fd().
 *
 * Supported format specifiers depend on the implementation of
 * printf_print_res(). Literal '%' characters must be written as "%%".
 *
 * @param fd  File descriptor where the output should be written.
 * @param s   Format string containing characters and optional format
 *            specifiers beginning with '%'.
 * @param ... Additional arguments matching the format specifiers found
 *            in @p s.
 *
 * @return The total number of characters written on success, or -1 if an
 *         error occurs (invalid string, write failure, or failed conversion).
 *
 * @note This function uses variadic arguments and relies on ft_putchar_fd()
 *       and printf_print_res() for low-level output.
 */
int	ft_printf_fd(int fd, const char *s, ...)
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
			ret = printf_print_res(args, s[++i], fd);
		else
			ret = ft_putchar_fd(s[i], fd);
		if (ret == -1)
			return (-1);
		final_len += ret;
	}
	va_end(args);
	return (final_len);
}
