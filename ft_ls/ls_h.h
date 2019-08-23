/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ls_h.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 20:06:10 by sdeidre           #+#    #+#             */
/*   Updated: 2019/08/23 19:50:00 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LS_H_H
# define LS_H_H

# include "libft/libft.h"

//подключаем библиотеки, которые разберем дальше

enum {DOUBLE_DASH, NO_DASH, error3}

# define LS_A
# define LS_L
# define LS_R
# define LS_R_LIT
# define LS_T
# define LS_D
# define LS_ONE
# define LS_G
# define LS_U
# define LS_F
# define LS_G_LIT
# define LS_LR

typedef struct		s_flags
{
	short			f_l;
	short			f_r_big;
	short			f_a;
	short			f_r;
	short			f_r;
	short			f_t;
	short			f_u;
	short			f_f;
	short			f_g;
	short			f_d;
	short			f_one;
	short			f_g_big;

}					t_flags
