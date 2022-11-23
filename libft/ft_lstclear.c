/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nschwob <nschwob@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:10:11 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/22 03:52:38 by nschwob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void
*))
{
	t_list	*counter;

	if ((!lst) || (!del))
		return ;
	while (*lst)
	{
		counter = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = counter;
	}
	*lst = 0;
}
