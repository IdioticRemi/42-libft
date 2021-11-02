/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:54:01 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/02 15:08:41 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_ptr	ft_memset(t_ptr ptr, int value, t_uint count)
{
	t_uint	i;
	unsigned char	*src;

	i = 0;
	src = (unsigned char *) ptr;
	while (i < count)
		src[i++] = value;
	return (ptr);
}