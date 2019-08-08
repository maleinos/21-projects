/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:30:51 by sdeidre           #+#    #+#             */
/*   Updated: 2019/02/17 23:01:15 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_putnbr(int nb)
{
	int				flag;
	unsigned int	bn;

	bn = nb;
	flag = 1;
	if (nb < 0)
	{
		bn = -nb;
		ft_putchar('-');
	}
	while ((nb / 10) != 0)
	{
		flag = flag * 10;
		nb = nb / 10;
	}
	while (flag >= 1)
	{
		ft_putchar(bn / flag + '0');
		bn = bn - (bn / flag) * flag;
		flag = flag / 10;
	}
}
