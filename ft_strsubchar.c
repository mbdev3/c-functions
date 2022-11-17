/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsubchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 20:25:34 by mbanani           #+#    #+#             */
/*   Updated: 2018/11/02 20:28:21 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strsubchar(char const *s, unsigned int start, size_t len,
		char ch)
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
			while (0 < len && s[i + j] != ch)
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
