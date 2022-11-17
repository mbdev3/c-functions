/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 20:32:33 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/26 21:44:18 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strmapi(const char *s, char (*f) (unsigned int, char))
{
	int		i;
	int		size;
	char	*str;

	if (!s || !f)
		return (NULL);
	i = 0;
	size = ft_strlen(s);
	str = (char*)s;
	if (!(str = (char*)malloc(size + sizeof(char))))
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
