/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 18:03:42 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 20:53:03 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char			*ft_itoa(int n)
{
	char	*str;
	int		count;

	count = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = ft_numcount(n) + count;
	if (n < 0)
	{
		n = -n;
	}
	if (!(str = malloc(count + 1)))
		return (NULL);
	str[count] = '\0';
	while (n > 0)
	{
		str[count-- - 1] = n % 10 + 48;
		n = n / 10;
	}
	if (count == 1)
		str[0] = '-';
	return (str);
}
