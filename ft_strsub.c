/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 18:13:15 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/24 16:11:28 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	unsigned int		j;
	unsigned int		i;
	char				*c;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	if (!(c = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (s[++i])
	{
		if (i == start)
		{
			while (0 < len)
			{
				c[j] = s[j + i];
				j++;
				len--;
			}
			c[j] = '\0';
			return (c);
		}
	}
	return (NULL);
}
