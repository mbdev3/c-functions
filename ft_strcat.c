/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 14:49:12 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/24 16:07:59 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strcat(char *s1, const char *s2)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	j = 0;
	while (s2[j])
	{
		s1[i] = s2[j];
		j++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
