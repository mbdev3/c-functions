/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delspacestart.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 19:07:51 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 20:12:13 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_delspacestart(const char *s)
{
	char		*dest;
	char		*res;
	int			i;

	i = 0;
	dest = (char*)s;
	if (dest[i] == '\0')
		return ("");
	while (dest[i] == ' ' || dest[i] == '\n' || dest[i] == '\t')
	{
		i++;
	}
	res = &(dest[i]);
	return (res);
}
