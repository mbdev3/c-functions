/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 19:55:19 by mbanani           #+#    #+#             */
/*   Updated: 2018/11/02 20:51:14 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_putstrlen(const char *str, size_t c)
{
	size_t i;

	i = 0;
	while (str[i] && i < c)
	{
		ft_putchar(str[i]);
		i++;
	}
}
