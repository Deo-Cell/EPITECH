##
## EPITECH PROJECT, 2020
## make
## File description:
## file
##


SRC = 	my_ls.c		\
	my_putstr.c	\
	my_putchar.c	\
	my_strlen.c	\
	my_strncpy.c	\
	function.c	\
	my_putstr1.c	\
	rights.c

CC = gcc

OBJ = $(SRC:.c=.o)

NAME = my_ls

all : $(NAME)

$(NAME) : $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean :
	rm -f *.o
	rm -f *~

fclean : clean
	rm -f my_ls

re : fclean all
