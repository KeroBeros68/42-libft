/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kebertra <kebertra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 14:07:15 by kebertra          #+#    #+#             */
/*   Updated: 2025/12/10 13:59:12 by kebertra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdbool.h>

//##### Include Local #####//
# include "Char/libft_char.h"
# include "Fd/libft_fd.h"
# include "List/libft_list.h"
# include "Maths/libft_maths.h"
# include "Mem/libft_mem.h"
# include "Str/libft_string.h"
# include "Utils/libft_utils.h"
# include "Printf/libft_printf.h"
# include "GNL/libft_gnl.h"

//##### Define #####//
//	Num Base
# define HEX_MAJ "0123456789ABCDEF"
# define HEX_MIN "0123456789abcdef"
# define DEC "0123456789"

# ifndef TRUE
#  define TRUE 1
# endif

# ifndef FALSE
#  define FALSE 0
# endif

#endif