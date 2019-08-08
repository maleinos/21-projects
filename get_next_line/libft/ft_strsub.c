/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 02:24:17 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/29 17:55:09 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	if (!s)
		return (NULL);
	s1 = ft_strnew(len);
	if (!s1)
		return (NULL);
	i = 0;
	while (i < len && s[i])
		s1[i++] = s[start++];
	s1[i] = '\0';
	return (s1);
}
