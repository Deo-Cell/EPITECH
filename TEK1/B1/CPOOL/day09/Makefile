##
## EPITECH PROJECT, 2021
## make
## File description:
## ## --------------------------------------------------------------- ##

NAME	=	binary name

UNIT = unit_tests

## --------------------------------------------------------------- ##

SRC = 	#list you source file

TEST = 	#test your source file

## --------------------------------------------------------------- ##

ECHO = echo


## --------------------------------------------------------------- ##

REDDARK	=	\033[31;1m
REDDARK =       \033[31;1m
RED     =       \033[31;1m
GREEN   =       \033[32;1m
YEL     =       \033[33;1m
BLUE    =       \033[34;1m
PINK    =       \033[35;1m
CYAN    =       \033[36;1m
WHITE   =       \033[0m

INFO = $(REDDARK)$(GREEN)$(PINK)[INFO]\t$(CYAN)

NOM = Alex

## --------------------------------------------------------------- ##

T_FLAGS = --coverage -lcriterion

## --------------------------------------------------------------- ##

OBJ	=	$(SRC:.c=.o)

## --------------------------------------------------------------- ##
all:	$(NAME)
	@printf	"$(REDDARK)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)$(NAME)$(GREEN)] $(BLUE)-> $(BLUE)"
	@printf "$(WHITE)Compilation terminée."
	@printf "$ Binaire : $(REDDARK) ./%s$(WHITE)\n\n" $(NAME)

## --------------------------------------------------------------- ##

tests_run:	$(TEST)
		gcc -o $(UNIT) $(TEST) $(T_FLAGS)
		./$(UNIT)
		gcovr --exclude tests/test.c
		gcovr --exclude tests/ --branches

## --------------------------------------------------------------- ##

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(OBJ)
	@$(ECHO) "$(INFO)Compilation terminée !\n$(DEFAULT)"
	@echo "\033[01m\033[05m\033[31m\033[03m[${NAME}]\033[00m"
	@echo "\033[01m\033[05m\033[31m\033[03m[${NOM}]\033[00m"

## --------------------------------------------------------------- ##
clean:
	@rm -f $(OBJ)
	@rm -f *~
	@rm -f .gcda
	@rm -f .gcno
	@printf "$(GREEN)\n$(WHITE)"
	@printf "$(GREEN)  [$(WHITE)$(NAME)$(GREEN)] $(YEL)-> "
	@printf "$(WHITE)Suppression terminée.\n\n"

pizza:
	@rm -f *~
	@rm -f vgcore.*
	@rm -f test.*
	@rm -f function.*
	@rm -f function_p.*

fclean:		pizza clean
	@rm -f $(NAME)
	@rm -f $(UNIT)

re:	fclean all

.PHONY: re clean fclean all pizza

## ========================================================================= ##
%.o:    %.c
	@printf "$(REDDARK) ======== $(REDDARK)"
	@printf "$(GREEN)[$(WHITE)$(NAME)$(GREEN)] — $(WHITE)%-45s\n" $<
	@printf "$(GREEN) → $(RES) %-50s" $@
	@printf "$(GREEN)[$(WHITE)√$(GREEN)]\n\n"
	@gcc $(CFLAGS) -o $@ -c $<
