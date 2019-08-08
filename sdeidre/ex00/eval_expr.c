/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:44:44 by sdeidre           #+#    #+#             */
/*   Updated: 2019/02/17 23:03:04 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		eval_expr(char *str)
{
	return (function(&str));
}

int		function(char **str)
{
	int		i;
	int		j;
	char	z;

	i = function2(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		z = **str;
		if (z != '+' && z != '-')
			return (i);
		(*str)++;
		j = function2(str);
		if (z == '+')
			i = i + j;
		else
			i = i - j;
	}
	return (i);
}

int		function2(char **str)
{
	int		i;
	int		j;
	char	z;

	i = function3(str);
	while (**str)
	{
		while (**str == ' ')
			(*str)++;
		z = **str;
		if (z != '*' && z != '/' && z != '%')
			return (i);
		(*str)++;
		j = function3(str);
		if (z == '*')
			i = i * j;
		if (z == '/')
			i = i / j;
		if (z == '%')
			i = i % j;
	}
	return (i);
}

int		function3(char **str)
{
	int		i;

	while (**str == ' ')
		(*str)++;
	if (**str == '(')
	{
		(*str)++;
		i = function(str);
		if (**str == ')')
			(*str)++;
		return (i);
	}
	return (ft_atoi(str));
}
