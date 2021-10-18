/*
** EPITECH PROJECT, 2020
** my_factors
** File description:
** factorss
*/

#include <stdlib.h>
#include "include/my.h"
#include "include/eval_expr.h"

int factors(char const **str)
{
    int nb = number(str);

    while (*(*str) == '*' || *(*str) == '/' || *(*str) == '%' ||
    *(*str) == 'x' || *(*str) == 'y' || *(*str) == 'z') {
        if (*(*str) == '*' || *(*str) == 'x') {
            (*str)++;
            nb *= number(str); }
        if (*(*str) == '/' || *(*str) == 'y') {
            (*str)++;
            nb /= number(str);
        }
        if (*(*str) == '%' || *(*str) == 'z') {
            (*str)++;
            nb %= number(str);
        }
    }
    return (nb);
}
