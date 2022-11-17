/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 13:18:42 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/24 16:10:29 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strcpy(char *dst, const char *src)
{
	char *cpy;

	cpy = dst;
	while (*src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (cpy);
}
