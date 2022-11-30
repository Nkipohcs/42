/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:14:22 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/03 03:14:22 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t			i;
	unsigned char	*pts1;
	unsigned char	*pts2;

	pts1 = (unsigned char *)p1;
	pts2 = (unsigned char *)p2;
	i = 0;
	while (i < n && pts1[i] == pts2[i])
		i++;
	if (i == n)
		return (0);
	return (pts1[i] - pts2[i]);
}
