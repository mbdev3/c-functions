/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/08 11:11:15 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/16 16:37:24 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_atoi(const char *str)
{
	int			signe;
	long		res;

	signe = 1;
	res = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v'
			|| *str == '\f' || *str == '\n' || *str == '\r')
		str++;
	if (*str == '-')
	{
		signe = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
		if ((res * signe) > 2147483647)
			return (-1);
		if ((res * signe) < -2147483648)
			return (0);
	}
	return (res * signe);
}
