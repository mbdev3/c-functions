/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:16:46 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/23 12:22:16 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strcspn(const char *s1, const char *s2)
{
	size_t res;

	res = 0;
	while (*s1)
	{
		if (ft_strchr(s2, *s1))
		{
			return (res);
		}
		else
		{
			s1++;
			res++;
		}
	}
	return (res);
}
