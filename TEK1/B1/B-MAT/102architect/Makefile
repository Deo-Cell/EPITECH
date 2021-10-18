##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##


SRC = 	test.c			\
	my_putchar.c		\
	usage.c			\
	int_my_str_isnum.c	\
	translate.c		\
	scaling.c		\
	rotation.c		\
	reflection.c

OBJ = $(SRC:.c=.o)

NAME = 102architect

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -lm -o $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
