/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 04:10:02 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/07 16:55:20 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	j = 0;
	while ((haystack[i] != '\0' && i + j < n))
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			while ((j + i < n) && needle[j] && haystack[i + j] \
					&& haystack[i + j] == needle[j])
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (0);
}
