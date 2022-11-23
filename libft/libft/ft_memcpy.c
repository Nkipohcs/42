/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:14:26 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/03 03:14:26 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*pt_destination;
	char	*pt_source;

	if (!dst && !src)
		return (NULL);
	pt_destination = (char *)dst;
	pt_source = (char *)src;
	i = -1;
	while (++i < n)
		pt_destination[i] = pt_source[i];
	return (dst);
}
