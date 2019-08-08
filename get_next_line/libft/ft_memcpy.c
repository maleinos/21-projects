/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 19:09:48 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/07 16:42:38 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *src1;
	unsigned char *dst1;

	if (dst == src)
		return (dst);
	src1 = (unsigned char *)src;
	dst1 = (unsigned char *)dst;
	while (n--)
		*dst1++ = *src1++;
	return (dst);
}
