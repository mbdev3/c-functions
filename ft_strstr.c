/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 16:28:14 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/13 14:44:03 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (*needle == 0)
	{
		return ((char*)haystack);
	}
	while (haystack[j])
	{
		if (haystack[j] == needle[0])
		{
			while (needle[i] && haystack[j + i] == needle[i])
			{
				i++;
			}
			if (!needle[i])
				return ((char*)&haystack[j]);
		}
		j++;
	}
	return (NULL);
}
