/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 19:24:29 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/16 17:21:44 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memalloc(size_t size)
{
	void *ptr;

	ptr = (void*)malloc(sizeof(*ptr) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, size);
		return (ptr);
	}
}
