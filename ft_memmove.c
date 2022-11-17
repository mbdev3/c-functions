/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/10 16:48:48 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/10 18:31:47 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	const char		*sr;
	char			*dest;

	sr = src;
	dest = dst;
	if (sr < dest)
	{
		dest = dest + n - 1;
		sr = sr + n - 1;
		while (n > 0)
		{
			*dest-- = *sr--;
			n--;
		}
	}
	if (sr > dest)
	{
		while (n > 0)
		{
			*dest++ = *sr++;
			n--;
		}
	}
	return (dst);
}
