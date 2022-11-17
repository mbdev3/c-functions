/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:10:11 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/13 15:45:00 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	while (*c1 || *c2)
	{
		if (*c1 != *c2)
		{
			return (*c1 - *c2);
		}
		c1++;
		c2++;
	}
	return (0);
}
