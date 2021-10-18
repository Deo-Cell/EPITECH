##
## EPITECH PROJECT, 2020
## makefile
## File description:
## mymakefile
##

SRC = 	my_putchar.c                    \
	my_put_nbr.c			\
	my_getnbr.c			\
	infin_add.c
OBJ = $(SRC:.c=.o)

NAME = infin_add

all:   $(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)

re: fclean all
