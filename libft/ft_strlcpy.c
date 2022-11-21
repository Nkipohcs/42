/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:31:09 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/17 08:24:29 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//size-bounded string copying and concatenation

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dstsize)
		return (ft_strlen(src));
	i = -1;
	while (src[++i] && i < dstsize -1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (ft_strlen(src));
}
