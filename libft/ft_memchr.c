/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:14:17 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/03 03:14:17 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//man locate byte in byte string

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = ((unsigned char *)s);
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((unsigned char *)str);
		str++;
	}
	return (0);
}
