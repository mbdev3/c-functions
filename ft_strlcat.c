/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 15:17:16 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/16 16:05:39 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t s;

	j = ft_strlen(src);
	i = 0;
	while (dst[i] && size > 0)
	{
		i++;
		size--;
	}
	s = 0;
	while (src[s] && size > 1)
	{
		dst[i] = src[s];
		i++;
		s++;
		size--;
	}
	if (size >= 1)
		dst[i] = '\0';
	return (i + j - s);
	return (0);
}
