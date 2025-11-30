/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ternaries.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/30 14:55:15 by kebertra          #+#    #+#             */
/*   Updated: 2025/11/30 15:00:32 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_utils.h"

void	*ft_ternaries_ptr(bool conditions, void *a, void *b)
{
	if (conditions)
		return (a);
	return (b);
}

int	ft_ternaries_int(bool conditions, int a, int b)
{
	if (conditions)
		return (a);
	return (b);
}
