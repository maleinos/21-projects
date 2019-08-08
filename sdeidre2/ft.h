/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcharman <bcharman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/16 17:02:33 by bcharman          #+#    #+#             */
/*   Updated: 2019/07/30 01:32:59 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct		s_tetr
{
	char			coor[4][2];
	char			letter;
	struct s_tetr	*next;
}					t_tetr;

int					validation(int fd, int *k);
t_tetr				*reading(int fd);
char				**solve_map(t_tetr *tetr, int *k);
void				print_map(char **map, int size);
int					normal(t_tetr *tetr);
void				free_map(char ***map, int a);
int					ft_sqrt(int nb);

#endif
