##
## EPITECH PROJECT, 2020
## makefile of bistro
## File description:
## makefile
##

SRC	=	eval_expr.c	\
		summands.c	\
		factors.c	\
		usage.c		\
		bistro.c	\
		main.c		\


OBJ	=	$(SRC:.c=.o)

NAME	=	calc

CC	=	gcc

RM	=	rm -f

all:	$(NAME)

$(NAME): $(OBJ)
	make -C lib/my
	$(CC) $(OBJ) -o $(NAME) -L lib/my -lmy

clean:
	make clean -C lib/my
	$(RM) $(OBJ)
	rm -rf include/*~

fclean: clean
	make fclean -C lib/my
	$(RM) $(NAME)
	$(RM) *~

re: fclean all
