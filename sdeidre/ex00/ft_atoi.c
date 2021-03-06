/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 21:41:17 by sdeidre           #+#    #+#             */
/*   Updated: 2019/02/17 23:01:47 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		ft_atoi(char **str)
{
	int	num;

	num = 0;
	while (**str <= '9' && **str >= '0')
	{
		num = num * 10 + (**str - '0');
		(*str)++;
	}
	return (num);
}
