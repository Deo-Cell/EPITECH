##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##


SRC = 	vector.c	\
	101pong.c	\
	usage.c		\
	isnum.c

OBJ = $(SRC:.c=.o)

NAME = 101pong

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -lm -o $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f *~

fclean: clean
	rm -f $(NAME)

re: fclean all
