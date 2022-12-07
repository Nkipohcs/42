/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_p.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:35:03 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/30 14:59:12 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* %p L’argument de pointeur void * doit être affiché en hexadécimal*/

void    *convert_p(char *str)
{
    return (ft_putstr_sd(str));
}