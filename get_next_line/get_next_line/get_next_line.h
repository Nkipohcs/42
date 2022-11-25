/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:20:26 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/25 03:20:45 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 7
# endif BUFFER_SIZE

# include <stdlib.h>
# include <unistd.h>

int             get_next_line(int fd);
size_t      	ft_strlen(const char *str);
char static	*ft_strchr(const char *s, int c);
char static     *ft_strjoin(char const *str1, char const *str2)
size_t static	ft_strlcpy(char *dst, const char *src, size_t dstsize)
char static	    *ft_substr(char const *s, unsigned int start, size_t len)

#endif
