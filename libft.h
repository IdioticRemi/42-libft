/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjolivea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:13:25 by tjolivea          #+#    #+#             */
/*   Updated: 2021/11/02 15:52:21 by tjolivea         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

typedef char*			t_str;
typedef const char*		t_cstr;
typedef void*			t_ptr;
typedef const void*		t_cptr;
typedef unsigned int	t_uint;

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
t_uint	ft_strlen(t_cstr str);
t_ptr	ft_memset(t_ptr pointer, int value, t_uint count);
void	ft_bzero(t_ptr ptr, t_uint count);
t_ptr	ft_memcpy(t_ptr dst, t_cptr src, t_uint n);
t_ptr	ft_memmove(t_ptr dst, t_cptr src, t_uint len);

#endif
