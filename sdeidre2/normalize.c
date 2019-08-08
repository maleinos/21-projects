/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 20:33:03 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/30 01:34:36 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		normal(t_tetr *tetr)
{
	int	i;
	int	x;
	int	y;

	while (tetr)
	{
		i = -1;
		x = tetr->coor[0][0];
		y = tetr->coor[0][1];
		while (++i < 4)
		{
			tetr->coor[i][0] -= x;
			tetr->coor[i][1] -= y;
		}
		tetr = tetr->next;
	}
	return (0);
}
