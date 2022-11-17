/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapital.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 19:16:11 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/24 16:57:10 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strcapital(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	while (str[i])
	{
		if (((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 64))
				&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		i++;
	}
	return (str);
}
