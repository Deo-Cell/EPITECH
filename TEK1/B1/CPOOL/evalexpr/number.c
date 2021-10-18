/*
** EPITECH PROJECT, 2020
** number
** File description:
** number
*/


#include <stdlib.h>
#include <stdio.h>

int number(char **str_ptr)
{
    int i = 0;
    int nb = 0;
    int m = 1;

    while ( (*str_ptr)[i] == '-' || (*str_ptr) [i] == '+' ) {
        if ( (*str_ptr)[i] == '-') {
            m = m * 1;
        }
        i++;
    }
    while ( (*str_ptr)[i] >= '0' && (*str_ptr)[i] <= '9') {

        nb = nb * 10;
        nb = nb + ((*str_ptr)[i] -48);
        i++;
    }
    (*str_ptr) = (*str_ptr) + i;
    return (nb * m);
}
