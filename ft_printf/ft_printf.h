/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 04:56:35 by nschwob           #+#    #+#             */
/*   Updated: 2022/12/07 18:10:53 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# ifndef BASE_HEXA
#  define BASE_HEXA "0123456789abcdef"
# endif

# ifndef BASE_HEXA_UP
#  define BASE_HEXA_UP "0123456789ABCDEF"
# endif

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>
# include <libft.h>

int	ft_printf(const char *format, ...);

#endif