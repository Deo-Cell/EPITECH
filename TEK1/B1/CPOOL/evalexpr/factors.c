/*
** EPITECH PROJECT, 2020
** factors
** File description:
** factors
*/

#include <stdlib.h>
#include <stdio.h>

int number(char **str_ptr);

int parenthesis(char **str_ptr);

int  factors(char ** str_ptr)
{
    char n;
    int h = 0;
    n = parenthesis(str_ptr);

    while ( (*str_ptr)[h] != '\0') {
        if (*(*str_ptr) == '*') {
            (*str_ptr)++;
           n = n * parenthesis(str_ptr);
        }
        else if ((*(*str_ptr)) == '/' ) {
            (*str_ptr)++;
            n = n / parenthesis(str_ptr);
        }
        else if ((*(*str_ptr)) == '%' ) {
            (*str_ptr)++;
            n = n % parenthesis(str_ptr);
        }
        else
            return (n);
    }
    return (n);
}
