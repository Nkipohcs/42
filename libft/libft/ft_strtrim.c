/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:07:05 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/21 17:45:44 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//strtrim removes all whitespace chars from the beginning and the end of a str.

#include "libft.h"

static int	ft_checktrim(char c, char const *set)
{
	int		i;

	i = -1;
	while (set[++i])
		if (set[i] == c)
			return (1);
	return (0);
}

static int	ft_get_size(char const *s1, char const *set)
{
	int		i;
	int		size;

	size = ft_strlen(s1);
	i = 0;
	while (ft_checktrim(s1[size - 1], set))
		i++;
	return (size - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		size;
	char	*str;

	i = 0;
	size = 0;
	if (!s1)
		return (0);
	if (!set)
		return (ft_strdup(s1));
	while (ft_checktrim(s1[i], set))
		i++;
	if (i == (int)ft_strlen(s1))
		return (ft_strdup(""));
	size = ft_get_size(s1 + i, set) + 1;
	if (!(str = (char *)malloc((size) * sizeof(char))))
		return (NULL);
	ft_strlcpy(str, s1 + i, size);
	return (str);
}
