/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbanani <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/11 16:15:24 by mbanani           #+#    #+#             */
/*   Updated: 2018/10/24 15:01:35 by mbanani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_strdel(char **as)
{
	char **ptr;

	ptr = as;
	if (!ptr)
		return ;
	free(*ptr);
	*ptr = 0;
}