/*
** EPITECH PROJECT, 2020
** summands
** File description:
** summands
*/

#include <stdlib.h>
#include <stdio.h>

int number(char **str_ptr);

int factors(char **str_ptr);

int  summands(char ** str_ptr)
{
    int i;
    int n;

    i = factors(str_ptr);

    while ( *(*str_ptr) != '\0') {
        n = *(*str_ptr);
        if (n == '+') {
            (*str_ptr)++;
            i +=  factors(str_ptr);
        }
        else if (n == '-' ) {
            (*str_ptr)++;
            i = i - factors(str_ptr);
        }
        else
            return (i);
    }
    return (i);
}

int parenthesis(char **str_ptr)
{
    int k = 0;

    if (*(*str_ptr) == '(') {
        (*str_ptr)++;
        k = summands(str_ptr);
        if (*(*str_ptr) == ')')
            (*str_ptr)++;
   }
    else
        k = number(str_ptr);
    return k;
}
