/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 03:47:10 by sdeidre           #+#    #+#             */
/*   Updated: 2019/08/23 20:06:49 by sdeidre          ###   ########.fr       */
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
		if (av[i] == '-' && av[i + 1] == '-')
			errors(av[i + 1], DOUBLE_DASH);
		if (av[i] != '-')
			error2(av[i], NO_DASH);
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

int			errors(char *letter, int err)
{
	if (err == DOUBLE_DASH)
	{
		ft_putstr_fd("ft_ls: illegal option -- -", 2);
		ft_putstr_td("/nusage: ls [-ABCFGHLOPRSTUWabcdefghiklmnopqrstuwx1] [file ...]\n", 2);
	}
	if (err == NO_DASH)
	{
		ft_putstr_fd("ls: ", 2);
		ft_putchar_fd(*letter, 2);
		ft_putstr_fd(": No such file or directory", 2);
	}
	return (0);
}
