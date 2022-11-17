/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 17:52:58 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/16 15:11:07 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*sr;
	char		*dest;

	sr = src;
	dest = dst;
	while (n > 0)
	{
		*dest++ = *sr++;
		n--;
	}
	return (dst);
}
