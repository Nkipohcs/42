/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:14:37 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/17 00:12:10 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = ((unsigned char *)s) - 1;
	while (*++str != ((unsigned char)c))
		if (*str == 0)
			return (NULL);
	return ((char *)str);
}
