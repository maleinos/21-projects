/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/02 00:58:43 by sdeidre           #+#    #+#             */
/*   Updated: 2019/06/02 05:29:06 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_lensplit(char const *str, char c)
{
	int			i;
	int			len;

	i = 0;
	len = 0;
	while (str[i] == c)
		i++;
	while (str[i] != c && str[i] != '\0')
	{
		i++;
		len++;
	}
	return (len);
}

static int		ft_countsplit(char const *str, char c)
{
	int			count;
	int			i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			count++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	int			i;
	int			j;
	int			k;
	char		**str2;

	if (!s || !(str2 = (char **)malloc(sizeof(*str2) *
		(ft_countsplit(s, c) + 1))))
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_countsplit(s, c))
	{
		k = 0;
		if (!(str2[i] = ft_strnew(ft_lensplit(&s[j], c) + 1)))
			str2[i] = NULL;
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			str2[i][k++] = s[j++];
		str2[i][k] = '\0';
	}
	str2[i] = 0;
	return (str2);
}
