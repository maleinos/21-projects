/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 19:11:03 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/06 16:05:29 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s1;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	if (!f)
		return (NULL);
	s1 = ft_strnew(ft_strlen(s));
	if (!s1)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = (*f)(i, s[i]);
		i++;
	}
	return (s1);
}
