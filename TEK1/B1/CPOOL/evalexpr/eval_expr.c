/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** eval_expr
*/

#include <unistd.h>
#include <stdio.h>

int my_put_nbr(int nb);

void my_putchar(char c);

int number(char ** str_ptr);

int summands(char ** str_ptr);

int factors(char ** str_ptr);

int parenthesis(char **str_ptr);

int eval_expr(char const *str);

int  main(int ac , char **av)
{
    if (ac == 2)
    {
        my_put_nbr(summands(&av[1]));
        my_putchar('\n');
        return  (0);
    }
    return  (84);
}
