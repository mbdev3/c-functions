/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:34:14 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 20:47:19 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_numcount(int nb)
{
	int n;
	int count;

	n = nb;
	if (n < 0)
	{
		n = n * (-1);
	}
	count = 0;
	while (n > 0)
	{
		count++;
		n = n / 10;
	}
	if (nb > 0)
	{
		return (count);
	}
	return (count + 1);
}
