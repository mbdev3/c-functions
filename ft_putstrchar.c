/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 19:45:53 by mbanani           #+#    #+#             */
/*   Updated: 2018/11/02 19:54:01 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putstrchar(const char *str, char c)
{
	int i;

	i = 0;
	while (str[i] && str[i] != c)
	{
		ft_putchar(str[i]);
		i++;
	}
}
