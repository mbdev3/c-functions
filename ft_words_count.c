/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:57:32 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/22 18:00:48 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t		ft_words_count(const char *s, char c)
{
	size_t i;
	size_t count;

	i = 0;
	count = 0;
	if (s[0] != c)
	{
		count = count + 1;
	}
	while (s[i] == c)
	{
		i++;
	}
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c && s[i] != '\0')
		{
			count++;
		}
		i++;
	}
	return (count);
}
