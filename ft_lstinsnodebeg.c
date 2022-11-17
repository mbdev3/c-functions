/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstinsnodebeg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/27 16:47:16 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/27 17:04:21 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_list		*ft_insertbeg(t_list *head, void *x)
{
	t_list *temp;

	temp = (t_list*)malloc(sizeof(t_list));
	temp->content = x;
	temp->next = head;
	head = temp;
	return (head);
}
