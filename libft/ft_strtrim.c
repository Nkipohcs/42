/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:07:05 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/19 23:08:21 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strtrim removes all whitespace chars from the beginning and the end of a str.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	long	first;
	long	last;

	if (!s1 || !set)
		return (0);
	last = (ft_strlen(s1)-1);
	first = 0;
	while (s1[first] && ft_strrchr(set, s1[first]))
		++first;
	if (!s1)
		return (0);
	while (s1[last] > 0 && ft_strrchr(set, s1[last]) > 0)
		--last;
	if (!s1)
		return (0);
	return (ft_substr(s1, first, last - first + 1));
}
