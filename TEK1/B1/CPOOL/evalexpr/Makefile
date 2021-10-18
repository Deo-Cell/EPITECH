##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##


SRC = 	my_putchar.c	\
	my_put_nbr.c	\
	summands.c	\
	number.c	\
	factors.c	\
	eval_expr.c

CC = gcc

OBJ = $(SRC:.c=.o)

NAME = eval_expr

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f eval_expr

re: fclean all
