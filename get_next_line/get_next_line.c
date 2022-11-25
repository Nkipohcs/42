/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:20:12 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/25 03:34:42 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    static	*ft_strchr(const char *s, int c)
{
	unsigned char	*str;

	str = ((unsigned char *)s) - 1;
	while (*++str != ((unsigned char)c))
		if (*str == 0)
			return (NULL);
	return ((char *)str);
}

char static *ft_strjoin(char const *str1, char const *str2)
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

size_t static	ft_strlcpy(char *dst, const char *src, size_t dstsize)
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

size_t	ft_strlen(const char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

char static	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	if (!s)
		return (0);
	if (ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	if (ft_strlen(s) <= start)
	{
	len = 0;
	start = ft_strlen(s);
	}
	str = (char *)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	while (s[start] && i < len)
		str[i++] = s[start++];
	str[i] = 0;
	return (str);
}