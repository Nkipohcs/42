/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 04:54:40 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/30 14:32:34 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *format, ...)
{
    va_list (args);
    int i;
    va_start (args, format);
    i = -1;
if (!format)
    return (0);
    while(format[++i])
    {
            if (format[i] == '%')
            {
                if (!ft_checkconv(format, &args, &i))
                return (0);
            }
    va_end  (args);
    return (0);
}

int ft_checkconv(const char format, va_list args)
{
    int i;
    
	if (c == 'c')
		i = convert_c(va_arg(args, int));
	else if (c == 'd')
		i = convert_d(va_arg(args, int));
	else if (c == 'i')
		i = convert_i(va_arg(args, int));
	else if (c == 'p')
		i = convert_p(va_arg(args, void *));
	else if (c == 'prct')
		i = convert_prct('%');
	else if (c == 's')
		i = convert_s(va_arg(args, char *));
	else if (c == 'u')
		i = convert_u(va_arg(args, unsigned int));
	else if (c == 'x')
		i = convert_x(va_arg(args, int));
	else if (c == 'X')
		i = convert_XUP(va_args(args, int));
	return (i);
}

ft_compare;