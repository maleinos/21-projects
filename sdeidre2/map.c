/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:17:53 by bcharman          #+#    #+#             */
/*   Updated: 2019/08/03 00:30:14 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char		**create_map(int a)
{
	char	**map;
	int		i;
	int		j;

	if (!(map = (char**)malloc(a * sizeof(char*))))
		return (NULL);
	i = -1;
	while (++i < a)
	{
		map[i] = (char*)malloc(a * sizeof(char));
		j = -1;
		while (++j < a)
			map[i][j] = '.';
	}
	return (map);
}

int			try_me(char ***map, t_tetr *tetr, int xy[2], int a)
{
	int		j;

	j = -1;
	while (++j < 4)
		if (xy[0] + tetr->coor[j][0] >= a ||
			xy[1] + tetr->coor[j][1] >= a ||
			xy[0] + tetr->coor[j][0] < 0 ||
			xy[1] + tetr->coor[j][1] < 0 ||
			(*map)[xy[0] + tetr->coor[j][0]][xy[1] + tetr->coor[j][1]] != '.')
			return (0);
	j = -1;
	while (++j < 4)
		(*map)[xy[0] + tetr->coor[j][0]][xy[1]
			+ tetr->coor[j][1]] = tetr->letter;
	return (1);
}

void		erase_me_please(char ***map, t_tetr *tetr, int xy[2])
{
	int		j;

	j = -1;
	while (++j < 4)
		(*map)[xy[0] + tetr->coor[j][0]][xy[1] + tetr->coor[j][1]] = '.';
}

int			fill_map(char ***map, t_tetr *tetr, int a)
{
	int		xy[2];

	if (tetr == NULL)
		return (1);
	xy[0] = -1;
	while (++xy[0] < a)
	{
		xy[1] = -1;
		while (++xy[1] < a)
		{
			if ((try_me(map, tetr, xy, a)))
			{
				if ((fill_map(map, tetr->next, a)))
					return (1);
				else
					erase_me_please(map, tetr, xy);
			}
		}
	}
	return (0);
}

char		**solve_map(t_tetr *tetr, int *k)
{
	char	**map;
	int		a;

	a = ft_sqrt(*k * 4);
	map = create_map(a);
	while (!(fill_map(&map, tetr, a)))
	{
		free_map(&map, a);
		a++;
		map = create_map(a);
	}
	*k = a;
	return (map);
}
