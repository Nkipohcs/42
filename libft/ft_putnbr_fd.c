/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 15:24:11 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/10 15:24:11 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Outputs the integer ’n’ to the given file descriptor.

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	n2;

	n2 = (long int)n;
	if ((n2 == -2147483648) && (fd < 2))
		ft_putstr_fd("-2147483648", fd);
	if (n2 < 0)
	{
		ft_putchar_fd('-', fd);
			n2 = n2 * -1;
	}
	if (n2 > 9)
	{
		ft_putnbr_fd(n2 / 10, fd);
	}
	ft_putchar_fd((n2 % 10) + '0', fd);
}
