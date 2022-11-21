/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 03:14:45 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/15 03:45:39 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//compare strings

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && n && *s1 == *s2)
	{
		n--;
		s1++;
	s2++;
	}
	if (n == 0)
		return (0);
	return ((unsigned char)*s1 -(unsigned char)*s2);
}
