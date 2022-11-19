/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 17:52:08 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/17 08:36:20 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Applies the 'f' function to each character in the
//character string passed as argument,
//and passing its index as the first argument.
//Each character is passed by address to 'f'
//in order to be modified if necessary.

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
			i++;
	}
}
