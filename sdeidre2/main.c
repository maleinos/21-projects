/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:00:09 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/30 00:58:39 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int			main(int argc, char **argv)
{
	int		fd;
	int		k;
	t_tetr	*tetr;
	char	**map;

	if (argc != 2)
	{
		write(1, "usage: ./fillit <filename>\n", 27);
		return (0);
	}
	fd = open(argv[1], O_RDONLY);
	if (validation(fd, &k) == -1)
	{
		write(1, "error\n", 6);
		return (0);
	}
	close(fd);
	fd = open(argv[1], O_RDONLY);
	tetr = reading(fd);
	normal(tetr);
	map = solve_map(tetr, &k);
	print_map(map, k);
	close(fd);
	return (0);
}
