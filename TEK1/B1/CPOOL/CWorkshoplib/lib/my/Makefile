## EPITECH PROJECT, 2020
## day10
## File description:
## Makefile
##

SRC =	my_putchar.c			\
	my_isneg.c 			\
	my_put_nbr.c			\
	my_swap.c			\
	my_putstr.c			\
	my_strlen.c			\
	my_getnbr.c			\
	my_strcpy.c			\
	my_strncpy.c			\
	my_revstr.c			\
	my_strstr.c			\
	my_strcmp.c			\
	my_strncmp.c			\
	my_strupcase.c			\
	my_strlowcase.c			\
	my_strcat.c			\
	my_strncat.c			\
	my_compute_power_rec.c		\
	my_compute_square_root.c


OBJ = $(SRC:.c=.o)

NAME = 		libmy.a

all:   $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f libmy.a

re: fclean all
