# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sdeidre <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/17 23:03:35 by sdeidre           #+#    #+#              #
#    Updated: 2019/02/17 23:11:31 by sdeidre          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr

SRC = eval_expr.c main.c ft_atoi.c ft_putnbr.c ft_putchar.c

O = eval_expr.o main.o ft_atoi.o ft_putnbr.o ft_putchar.o

H = header.h

all: 
	gcc -Wall -Wextra -Werror -c $(SRC) -I$(H)
	gcc -o $(NAME) $(SRC) -I$(H)
	
clean:
	/bin/rm -f $(O)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
