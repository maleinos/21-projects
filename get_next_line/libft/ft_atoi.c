/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 06:38:51 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/07 16:45:10 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	unsigned long	n;
	int				atoi;
	unsigned long	symbol;

	symbol = 1;
	while (*str == '\r' || *str == ' ' || *str == '\n' ||
			*str == '\t' || *str == '\v' || *str == '\f')
		str++;
	n = 0;
	if (*str == '-')
	{
		symbol = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str <= '9' && *str >= '0')
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	atoi = n * symbol;
	return (atoi);
}
