/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/18 12:58:25 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/24 15:23:47 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int	words_count(const char *str, char c)
{
	int i;
	int count;

	if (!str)
		return (0);
	i = 0;
	count = 0;
	if (str[0] != c)
	{
		count = count + 1;
	}
	while (str[i] == c)
	{
		i++;
	}
	while (str[i])
	{
		if (str[i] != c && str[i - 1] == c && str[i] != '\0')
		{
			count++;
		}
		i++;
	}
	return (count);
}

char		**ft_strsplit(const char *s, char c)
{
	char		**str;
	int			i;
	int			k;
	int			start;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	if (!(str = (char**)malloc(sizeof(char*) * (words_count(s, c) + 1))))
		return (NULL);
	while (s[i] && k < words_count(s, c))
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i])
				i++;
			str[k] = ft_strsub(s, start, i - start);
			k++;
		}
		i++;
	}
	str[k] = 0;
	return (str);
}
