/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 04:54:40 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/27 05:28:05 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_printf(const char *str, ...)
{
    unsigned int i;
    unsigned int i2;

    i = -1    
    i2 = ft_strlen(str);

if (!str)
    return (0);
    while(str[++i])
    {
        write(1, &str[i], 1)
    }
}


printf(str)
