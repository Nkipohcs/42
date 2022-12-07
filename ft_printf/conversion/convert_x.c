/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_x.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 05:33:20 by nschwob           #+#    #+#             */
/*   Updated: 2022/12/07 18:10:19 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*%x Affiche un nombre en hexadécimal (base 16) avec des lettres minuscules.*/
int	convert_x(int e)
{
char	strx;
int		i;

strx = ft_itoa(e);
i = -1;

	while (strx[++i])
	{
		if (strx[i] => '10' && strx[i] =< '16')
		{
			strx[i] = BASE_HEXA[i];
		}
	}
	return (ft_putchar_fd(strx));
}
