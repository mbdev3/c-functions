/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delspaceend.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/24 16:24:59 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 21:29:11 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_delspaceend(const char *s)
{
	char		*dest;
	size_t		i;

	if (!s)
		return (0);
	dest = (char*)s;
	i = ft_strlen(dest);
	while (dest[i - 1] == ' ' || dest[i - 1] == '\n' || dest[i - 1] == '\t')
	{
		i--;
	}
	return (i);
}
