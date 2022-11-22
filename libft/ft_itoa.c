/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:22 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/10 15:23:22 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//convert integer to ASCII string

#include "libft.h"

static int	ft_len(long n)
{
	int	n2;

	n2 = 0;
	if (!n)
		return (1);
	if (n < 0)
	{
		n *= -1;
		n2++;
	}
	while (n > 0)
	{
		n /= 10;
		n2++;
	}
	return (n2);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	n2;
	int		n3;

	n2 = (long) n;
	n3 = ft_len(n2);
	str = malloc((n3 + 1) * sizeof(char));
	if (!str)
		return (0);
	if (n2 < 0)
		n2 *= -1;
	str += n3;
		*str = 0;
	if (!n2)
		*--str = '0';
	while (n2 > 0)
	{
		*--str = n2 % 10 + '0';
		n2 /= 10;
	}
	if (n < 0)
		*--str = '-';
	return (str);
}
