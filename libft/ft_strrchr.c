/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:14:50 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/17 08:43:57 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//locate character in string

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while ((unsigned char) s[i] != (unsigned char) c)
	{
		if (!i--)
			return (0);
	}
	return ((char *)(s + i * sizeof(char)));
}
