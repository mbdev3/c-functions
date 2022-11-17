/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 18:56:29 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/21 19:00:55 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list *new;

	while (lst)
	{
		new = lst->next;
		f(lst);
		lst = new;
	}
}
