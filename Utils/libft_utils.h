/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:17:44 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/29 16:59:07 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_UTILS_H
# define LIBFT_UTILS_H

# include "../libft.h"

void	ft_swap(int *a, int *b);
char	*ft_itoa(int n);
int		ft_atoi(const char *nptr);
int		ft_check_base(const char *base, size_t len_base);

#endif