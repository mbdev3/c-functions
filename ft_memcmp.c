/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 18:33:22 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/16 15:17:05 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char *d1;
	const unsigned char *d2;

	d1 = (unsigned char*)s1;
	d2 = (unsigned char*)s2;
	while (n > 0)
	{
		if (*d1 != *d2)
		{
			return (*d1 - *d2);
		}
		else
		{
			d1++;
			d2++;
		}
		n--;
	}
	return (0);
}
