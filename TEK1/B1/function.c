/*
** EPITECH PROJECT, 2020
** function
** File description:
** function
*/

#include <stdlib.h>
#include <string.h>

int my_strlen(char const *str);

int function(char *str, char *al)
{
    char *stk = malloc(sizeof(char) * (1000 + 1));
    int i = 0;
    int j = 0;

    j = my_strlen(str);
    while (stk[i] != '\0') {
        stk[i] = str[i];
        i++;
    }
    while (i < my_strlen(al) && j < my_strlen(stk)){
        str[j] = al[i];
        i++;
        j++;
    }
    return (0);
}
