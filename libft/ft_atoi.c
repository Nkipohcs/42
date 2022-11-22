/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:13:48 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/03 03:13:48 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//convert ASCII string to integer

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			sign;
	int			i;
	const char	*string2;
	int			result;

	string2 = str;
	i = 0;
	result = 0;
	sign = 1;
	while (((string2[i] >= 9 && string2[i] <= 13) || (string2[i] == 32)))
		i++;
	if (string2[i] == '-' || string2[i] == '+')
	{
		if (string2[i] == '-')
			sign = -sign;
		i++;
	}
	while (ft_isdigit(string2[i]))
	{
		result = result * 10 + string2[i] - '0';
		i++;
	}
	return (sign * result);
}
