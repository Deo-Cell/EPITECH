/*
** EPITECH PROJECT, 2020
** isnum
** File description:
** isnum
*/

#include <stdlib.h>

int isnum(char *str)
{
    for(int i = 0; str[i] != '\0'; i++) {
        if ((str[i] <= '0' || str[i] >= '9') && str[i] != '.' && str[i] != '-')
           return (84);
    }
    return (0);
}
