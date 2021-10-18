##
## EPITECH PROJECT, 2020
## makefile
## File description:
## file
##

SRC	=	my_putstr.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_strlen.c	\
		my_getnbr.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):		$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp $(NAME) ./../

clean:
	rm -rf $(OBJ)
	rm -rf *~

fclean: clean
	rm -rf $(NAME)

re:	fclean all
