/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: konito <konito@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 03:08:49 by nschwob           #+#    #+#             */
/*   Updated: 2022/11/21 22:13:08 by konito           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*first;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	else
	{
		first = ft_lstlast(*lst);
		first->next = new;
	}
}
