/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 17:40:31 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/10 18:32:40 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *d;
	unsigned char ch;

	d = (unsigned char*)s;
	ch = c;
	while (n > 0)
	{
		if (*d == ch)
		{
			return (d);
		}
		else
		{
			d++;
		}
		n--;
	}
	return (NULL);
}
