/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_s.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:33:59 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/30 14:56:51 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*%s Affiche une chaîne de caractères (telle que définie par la convention C).*/

int convert_s(char str)
{
    return(ft_putstr_fd(str));
}