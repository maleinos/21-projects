/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/10 18:56:07 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/06 20:34:10 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	recurtion(int n, int fd)
{
	if (n >= 10 || n <= -10)
	{
		recurtion(n / 10, fd);
		recurtion(n % 10, fd);
	}
	else
	{
		if (n >= 0)
			ft_putchar_fd(n + '0', fd);
		else
			ft_putchar_fd(-1 * n + '0', fd);
	}
}

void		ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	recurtion(n, fd);
}
