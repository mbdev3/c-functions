/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/09 18:46:15 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 21:28:38 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const unsigned char	*sr;
	size_t				i;
	char				*dest;
	unsigned char		ch;

	ch = c;
	i = 0;
	dest = dst;
	sr = src;
	while (i < n && sr[i] != ch)
	{
		dest[i] = sr[i];
		i++;
	}
	if (sr[i] != ch)
		return (NULL);
	dest[i] = sr[i];
	return (dest + i + 1);
}
