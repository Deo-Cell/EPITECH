/*
** EPITECH PROJECT, 2020
** eval_expr
** File description:
** xpr
*/

#include "include/my.h"
#include "include/eval_expr.h"
#include <stdio.h>

int eval_expri(char const *str)
{
    int h = 0;

    while (str[h] != '\0') {
        if (str[h] == '(' && str[h - 1] >= '0' &&
        str[h - 1] <= '9' && h > 0) {
            my_putstr("syntax error");
            return 84;
        }
        if (str[h] == ')' && str[h + 1] >= '0' &&
        str[h + 1] <= '9') {
            my_putstr("syntax error");
            return 84;
        }
        h++;
    }
    my_put_nbr(summands(&str));
    return (0);
}
