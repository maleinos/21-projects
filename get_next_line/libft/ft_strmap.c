/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/12 18:54:26 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/06 16:03:34 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(char const *s, char (*f)(char))
{
	char			*s1;
	unsigned int	i;

	i = 0;
	if (!s)
		return (NULL);
	s1 = ft_strnew(ft_strlen(s));
	if (!f)
		return (NULL);
	if (!s1)
		return (NULL);
	while (s[i] != '\0')
	{
		s1[i] = (*f)(s[i]);
		i++;
	}
	return (s1);
}
