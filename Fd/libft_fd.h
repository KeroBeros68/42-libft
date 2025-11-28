/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_fd.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:12:06 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/28 13:40:55 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_FD_H
# define LIBFT_FD_H

# include "../libft.h"

ssize_t	ft_putchar_fd(char c, int fd);
ssize_t	ft_putstr_fd(char *s, int fd);
ssize_t	ft_putendl_fd(char *s, int fd);
ssize_t	ft_putnbr_fd(int n, int fd);
ssize_t	ft_putnbr_base_u_fd(long long nbr, const char *base,
			const int u, int fd);
int		ft_printf(const char *s, ...);
#endif