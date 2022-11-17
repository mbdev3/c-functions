/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/21 16:44:48 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/21 18:03:43 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	t_list **node;

	node = alst;
	del((*node)->content, (*node)->content_size);
	free(*node);
	*node = NULL;
}
