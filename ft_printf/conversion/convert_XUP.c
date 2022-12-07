/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_XUP.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:32:57 by nschwob           #+#    #+#             */
/*   Updated: 2022/12/07 18:02:10 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*%X Affiche un nombre en hexadécimal (base 16) avec des lettres majuscules.*/

int	convert_x(int e)
{
char strx;
int i;

strx = ft_itoa(e);
i = -1;

	while (strx[++i])
	{
		if (strx[i] => '10' && strx[i] =< '16')
			{
			strx[i] = BASE_HEXA_UP[i];
			}
	}
	return (ft_putchar_fd(strx));
}
