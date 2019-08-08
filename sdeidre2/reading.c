/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 16:36:13 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/30 01:37:51 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_tetr		*create_tetr(char buf[22], int l)
{
	int		i;
	int		j;
	t_tetr	*new;

	i = -1;
	j = -1;
	new = (t_tetr*)malloc(sizeof(t_tetr));
	while (buf[++i])
	{
		if (buf[i] == '#')
		{
			new->coor[++j][1] = i % 5;
			new->coor[j][0] = i / 5;
		}
	}
	new->letter = 'A' + l;
	new->next = NULL;
	return (new);
}

t_tetr		*ft_lstadd2end(t_tetr *tetris, t_tetr *tetrises)
{
	t_tetr	*start;

	start = tetrises;
	if (tetris)
	{
		if (tetrises)
		{
			while (tetrises->next)
				tetrises = tetrises->next;
			tetrises->next = tetris;
		}
		else
			start = tetris;
	}
	return (start);
}

t_tetr		*reading(int fd)
{
	char	buf[22];
	t_tetr	*tetrises;
	t_tetr	*tetris;
	int		ret;
	int		l;

	l = 0;
	tetrises = NULL;
	while ((ret = read(fd, buf, 21)))
	{
		buf[ret] = '\0';
		tetris = create_tetr(buf, l);
		tetrises = ft_lstadd2end(tetris, tetrises);
		l++;
	}
	return (tetrises);
}
