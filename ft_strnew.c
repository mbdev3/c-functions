/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 15:40:33 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/13 17:20:52 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char*)malloc(sizeof(*ptr) * (size + 1));
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		ft_bzero(ptr, size + 1);
		return (ptr);
	}
}
