/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:33:39 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/07 13:56:37 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		recurtion(int n)
{
	if (n >= 10 || n <= -10)
	{
		recurtion(n / 10);
		recurtion(n % 10);
	}
	else
	{
		if (n >= 0)
			ft_putchar(n + '0');
		else
			ft_putchar(-1 * n + '0');
	}
}

void			ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	recurtion(n);
}
