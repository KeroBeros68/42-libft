/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:02:41 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/16 18:02:51 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

/**
 * @brief Verifies if a character is alphanumeric.
 *
 * Returns true if `c` is a letter (a-z, A-Z) or a digit (0-9).
 *
 * @param c  Character to test.
 *
 * @return int  Non-zero if `c` is alphanumeric, 0 otherwise.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
