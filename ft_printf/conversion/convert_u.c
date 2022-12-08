/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:33:32 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/30 14:56:56 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*%u Affiche un nombre décimal non signé (base 10).*/

int convert_u(unsigned int i)
{
    return(ft_putnbr_fd(i));
}