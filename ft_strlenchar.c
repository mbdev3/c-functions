/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/04 19:36:33 by mbanani           #+#    #+#             */
/*   Updated: 2018/11/08 14:41:20 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t			ft_strlenchar(const char *str, int c)
{
	int i;

	i = 0;
	while (str[i] != c && str[i])
	{
		i++;
	}
	return (i);
}
