/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 19:55:24 by sdeidre           #+#    #+#             */
/*   Updated: 2019/07/13 20:05:23 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*f1(char *buf, char **tab, const int fd)
{
	char		*tmp1;
	int			nb;

	while ((nb = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[nb] = '\0';
		if (tab[fd] == NULL)
			tab[fd] = ft_strdup(buf);
		else
		{
			tmp1 = tab[fd];
			tab[fd] = ft_strjoin(tab[fd], buf);
			free(tmp1);
		}
	}
	return (tab[fd]);
}

int				get_next_line(const int fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static char	*tab[12288];
	char		*tmp;
	int			i;

	if (fd < 0 || fd > 12288 || BUFF_SIZE <= 0 || read(fd, buf, 0) < 0)
		return (-1);
	f1(buf, tab, fd);
	if (!tab[fd] || tab[fd][0] == '\0')
		return (0);
	i = 0;
	while (tab[fd][i] != '\n' && tab[fd][i] != '\0')
		i++;
	*line = ft_strsub(tab[fd], 0, i);
	tmp = tab[fd];
	if ((tab[fd] = ft_strchr(tab[fd], '\n')) == NULL)
		return (1);
	if (tab[fd][0] != '\0')
		tab[fd] = ft_strsub(tab[fd], 1, ft_strlen(tab[fd]));
	free(tmp);
	return (1);
}
