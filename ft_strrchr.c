/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 15:34:42 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/16 16:09:20 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strrchr(const char *s, int c)
{
	char *res;

	res = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			res = (char*)s;
		}
		if (*s == '\0')
			return (NULL);
		s++;
	}
	if (c == '\0')
	{
		return ((char*)s);
	}
	return (res);
}
