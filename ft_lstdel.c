/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 18:29:21 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/21 18:53:29 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	**node;
	t_list	*new;

	node = alst;
	while (*node)
	{
		new = (*node)->next;
		del((*node)->content, (*node)->content_size);
		free(*node);
		*node = new;
	}
	*node = NULL;
}
