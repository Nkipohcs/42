/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_prct.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:32:29 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/30 14:56:47 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*%% Affiche un signe pourcentage.*/
char    convert_prct(char prct)
{
    return (ft_putchar_fd(prct));
}