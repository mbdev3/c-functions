/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 18:35:26 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/23 18:32:00 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;

	p = b;
	while (len > 0)
	{
		*p = (unsigned char)c;
		p++;
		len--;
	}
	return (b);
}
