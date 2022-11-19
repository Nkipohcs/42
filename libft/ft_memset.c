/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:14:34 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/14 03:23:31 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fill a byte string with a byte c

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*string;

	string = b;
	i = 0;
	while (i < len)
	{
		string[i] = c;
		i++;
	}
	return (b);
}
