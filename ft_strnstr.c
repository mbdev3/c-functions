/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:31:25 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 21:40:09 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int i;
	int j;

	j = 0;
	if (*needle == 0)
		return ((char*)haystack);
	while (haystack[j] && len > 0)
	{
		if (haystack[j] == needle[0])
		{
			i = 1;
			while (needle[i] && haystack[j + i] == needle[i] && 0 < len)
			{
				i++;
				len--;
			}
			if (!needle[i])
			{
				return ((char*)&haystack[j]);
			}
		}
		len--;
		j++;
	}
	return (NULL);
}
