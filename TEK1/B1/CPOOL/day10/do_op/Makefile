##
## EPITECH PROJECT, 2020
## do_op
## File description:
## make
##

SRC =	do-op.c	\
	my_putstr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	do-op

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
