/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/27 18:17:44 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/02 15:41:03 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_UTILS_H
# define LIBFT_UTILS_H

# include "../libft.h"

void	ft_swap(int *a, int *b);
void	*ft_free_split(char **tab);
char	*ft_itoa(int n);
int		ft_atoi(const char *nptr);
int		ft_atoi_s(const char *nptr, bool *error);
int		ft_check_base(const char *base, size_t len_base);
int		ft_ternaries_int(bool conditions, int a, int b);
void	*ft_ternaries_ptr(bool conditions, void *a, void *b);

#endif