/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 09:11:03 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/06 16:35:08 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t1;
	unsigned char	*t2;

	if (n == 0)
		return (0);
	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (*t1 == *t2 && ++i < n)
	{
		t1++;
		t2++;
	}
	return ((int)(*t1 - *t2));
}
