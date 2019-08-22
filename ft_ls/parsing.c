/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 03:47:10 by sdeidre           #+#    #+#             */
/*   Updated: 2019/08/22 21:12:06 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ls_h.h"

int			pars(t_flags *theo, int ac, char **av) 
{
	int     i;

	i = 0;
	while (av[i] != '\0')
	{
		if (av[i] == '-' && av[i + 1] != '-')
		{
			whichflag(t_flag *theo, av[i + 1])
		}
		if (av[i] == '-' && av[i + 1] -- '-')
			error1(av[i + 1]);
		if (av[i] != '-')
			error2(av[i])
				return()
	}
	return (-1);
}

int			whichflag(t_flag *theo, char *dora)
{
	if (dora == 'l')
		theo->f_l = 1;
	if (dora == 'R')
		theo->f_r_big = 1;
	if (dora == 'a')
		theo->f_a = 1;
	if (dora == 'r')
		theo->f_r = 1;
	if (dora == 't')
		theo->f_t = 1;
	if (dora == 'u')
		theo->f_u = 1;
	if (dora == 'f')
		theo->f_f = 1;
	if (dora == 'g')
		theo->f_g = 1;
	else
		whichflag2(t_flag *theo, char *dora)
}

int			whichflag2(t_flag *theo, char *dora)
{
	if (dora == 'd')
		theo->f_d = 1;
	if (dora == '1')
		theo->f_one = 1;
	if (dora == 'G')
		theo->f_g_big = 1;
	else
	    errors(dora);
}

int			error1()
{
	ft_putstr_fd('ft_ls: illegal option -- -\n
			usage: ls [-ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1] [file ...]\n', 2);
	exit(1);
}

int			error2()
