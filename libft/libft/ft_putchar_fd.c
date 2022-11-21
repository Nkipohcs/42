/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:23:55 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/10 15:23:55 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the character ’c’ to the given file descriptor.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
