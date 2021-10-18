/*
** EPITECH PROJECT, 2020
** day8
** File description:
** task01
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int  my_strlen(char  const *str)
{
     int d;
     d = 0;
     while (str[d] != '\0')
{
        d++;
}
     return(d);
}
char *my_strdup(char  const *src)
{
    int i = 0;
    int d;
    char *str;
    d = my_strlen(src);
    str = malloc(sizeof(char) * (d + 1));
    while ( i < d)
    {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return(str);
}
