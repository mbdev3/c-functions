/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 19:02:18 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/22 16:35:06 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *node;

	if (!lst)
		return (NULL);
	node = f(lst);
	res = node;
	while (lst->next)
	{
		lst = lst->next;
		node->next = f(lst);
		node = node->next;
	}
	return (res);
}
