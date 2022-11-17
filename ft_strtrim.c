/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/26 20:01:13 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 21:27:48 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char			*ft_strtrim(const char *s)
{
	char		*dest;
	int			i;
	size_t		size;
	char		*res;

	if (!s)
		return (NULL);
	size = 0;
	dest = ft_delspacestart(s);
	size = ft_delspaceend(dest);
	if (*dest == '\0')
		return (ft_strdup(""));
	if (!(res = malloc(size + 1)))
		return (NULL);
	i = 0;
	while (s[i] && size > 0)
	{
		res[i] = dest[i];
		i++;
		size--;
	}
	res[i] = '\0';
	return (res);
}
