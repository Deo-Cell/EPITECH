##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC = 	my_putchar.c	\
	my_put_nbr.c	\
	my_putstr.c	\
	final.c		\
	display_name1.c	\
	display_size1.c	\
	finalstump.c

OBJ = $(SRC:.c=.o)

NAME = rush3

CC = gcc

all :	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)

clean :
	rm -f *.o
	rm -f *~

fclean : clean
	rm -f rush3

re : fclean all
