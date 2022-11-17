/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/14 13:11:05 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/14 20:15:54 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	i;
	unsigned int	j;
	char			*dest;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		dest = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (dest == NULL)
			return (NULL);
		while (s1[i])
		{
			dest[i] = s1[i];
			i++;
		}
		while (s2[j])
		{
			dest[i + j] = s2[j];
			j++;
		}
		dest[i + j] = '\0';
		return (dest);
	}
	return (NULL);
}
