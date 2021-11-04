/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:57:03 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/03 18:38:07 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(char c)
{
	return ((c >= 'A' && c <= 'Z') * (c + 32) + !(c >= 'A' && c <= 'Z') * c);
}