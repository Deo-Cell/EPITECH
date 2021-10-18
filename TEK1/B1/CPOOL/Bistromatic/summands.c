/*
** EPITECH PROJECT, 2020
** my_summands
** File description:
** my_s
*/

#include "include/my.h"
#include "include/eval_expr.h"

int summands(char const **str)
{
    int nb = factors(str);

    while (*(*str) == '+' || *(*str) == 'v' ||
    *(*str) == '-' || *(*str) == 'w') {
        if (*(*str) == '+' || *(*str) == 'v') {
            (*str)++;
            nb = nb + factors(str);
        }
        if (*(*str) == '-' || *(*str) == 'w') {
            (*str)++;
            nb = nb - factors(str);
        }
    }
    return (nb);
}

int number(char const **str)
{
    int i = 0, nb1 = 1, nb = 0;

    for (; *(*str) == '+' || *(*str) == '-'; (*str)++) {
        if (*(*str) == '-') {
            nb1 *= (-1);
        }
    }
    for (; *(*str) >= 48 && *(*str) <= 57; (*str)++) {
        i = (i * 10) + (*(*str) - 48);
    }
    for (; *(*str) == '(' || *(*str) == '{'; ) {
        (*str)++;
        nb = summands(str);
        (*str)++;
        return (nb * nb1);
    }
    return (nb1 * i);
}
