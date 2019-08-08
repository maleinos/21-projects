/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 17:53:51 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/03 20:21:53 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*i;
	unsigned char	sum;

	i = (unsigned char *)b;
	sum = (unsigned char)c;
	while (len-- > 0)
		*i++ = sum;
	return (b);
}
