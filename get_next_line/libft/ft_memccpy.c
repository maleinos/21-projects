/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:44:46 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/02 03:12:58 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void			*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	const char	*src1;
	char		*dst1;
	size_t		i;

	i = 0;
	src1 = (const char *)src;
	dst1 = (char *)dst;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (char)c)
			return ((void *)dst1 + i + 1);
		i++;
	}
	return (NULL);
}
