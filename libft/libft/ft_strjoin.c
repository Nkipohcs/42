/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:24:40 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/10 15:24:40 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// join elements of a string array

#include "libft.h"

char	*ft_strjoin(char const *str1, char const *str2)
{
	char	*dest;
	size_t	n;
	size_t	n2;

	if (!str1 && !str2)
		return (ft_strdup(""));
	if (str1 && !str2)
		return (ft_strdup(str1));
	if (!str1 && str2)
		return (ft_strdup(str2));
	n = ft_strlen(str1);
	n2 = ft_strlen(str2);
	dest = (char *)malloc(sizeof(char) *(n + n2 + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, str1, n + 1);
	ft_strlcat(dest, str2, n + n2 + 1);
	return (dest);
}
