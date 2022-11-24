/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 02:20:26 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/23 02:22:46 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE.H
# define GET_NEXT_LINE.H

# ifndef BUFFER_SIZE
# define BUFFER_SIZE 7
# endif BUFFER_SIZE

# include <stdlib.h>
# include <unistd.h>

int		get_next_line(int fd);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strcpy(char *dest, char *src);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
