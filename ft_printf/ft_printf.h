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
int	convert_xup(int e);
int	convert_x(int e);
int convert_u(unsigned int i);
int convert_s(char str);
char    convert_prct(char prct);
void    *convert_p(char *str);
int convert_i(int i);
int convert_d(int i);
int convert_c(char c);
int ft_checkconv(const char format, va_list args);

#endif