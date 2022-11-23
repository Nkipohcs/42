/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:24:37 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/10 15:24:37 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char			*dest;
	unsigned long	n;

	n = ft_strlen(s1) +1;
	dest = (char *)malloc(sizeof(*dest) * n);
	if (!dest)
		return (0);
	return ((char *)ft_memcpy(dest, s1, n));
}
