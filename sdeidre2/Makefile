SRC = main.c \
		validation.c \
		reading.c \
		map.c \
		print_map.c \
		normalize.c \
		ft_sqrt.c
OBJ = $(SRC:.c=.o)
INCL = ft.h
NAME = fillit
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	    gcc $(FLAGS) $(OBJ) -I $(INCL) -o $(NAME)

$(OBJ):
	    gcc $(FLAGS) -c $(SRC)

clean:
	    rm -f $(OBJ)

fclean: clean
	    rm -f $(NAME)
		
re: fclean all
