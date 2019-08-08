/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isdigit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 02:21:12 by sdeidre           #+#    #+#             */
/*   Updated: 2019/05/04 02:42:19 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>

int		ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}
