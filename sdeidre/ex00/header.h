/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/17 22:31:23 by sdeidre           #+#    #+#             */
/*   Updated: 2019/02/17 23:02:15 by sdeidre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

int		eval_expr(char *str);
int		function(char **str);
int		function2(char **str);
int		function3(char **str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_atoi(char **str);

#endif
