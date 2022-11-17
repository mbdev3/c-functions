/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 17:11:57 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/24 15:10:38 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	unsigned char *c1;
	unsigned char *c2;

	if (!s1 || !s2)
		return (0);
	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}
