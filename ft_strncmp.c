/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:24:40 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/13 15:52:17 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char *c1;
	unsigned char *c2;

	c1 = (unsigned char*)s1;
	c2 = (unsigned char*)s2;
	while (n > 0 && (*c1 || *c2))
	{
		if (*c1 != *c2)
		{
			return (*c1 - *c2);
		}
		c1++;
		c2++;
		n--;
	}
	return (0);
}
