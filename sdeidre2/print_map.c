/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 01:57:31 by sdeidre           #+#    #+#             */
/*   Updated: 2019/08/03 00:26:14 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	free_map(char ***map, int a)
{
	int	i;

	i = -1;
	while (++i < a)
		free((*map)[i]);
	free(*map);
}

void	print_map(char **map, int size)
{
	int i;
	int j;

	i = -1;
	while (++i < size)
	{
		j = -1;
		while (++j < size)
			write(1, &map[i][j], 1);
		write(1, "\n", 1);
	}
}
