/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 20:20:25 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 21:44:07 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strmap(const char *s, char (*f) (char))
{
	char	*str;
	int		i;
	int		size;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	str = (char*)s;
	if (!(str = (char*)malloc(size + sizeof(char))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
