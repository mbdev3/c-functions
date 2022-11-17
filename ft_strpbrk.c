/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 12:29:09 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/23 12:32:20 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strpbrk(const char *s, const char *charest)
{
	while (*s)
	{
		if (ft_strchr(charest, *s))
			return ((char*)s);
		s++;
	}
	return (NULL);
}
