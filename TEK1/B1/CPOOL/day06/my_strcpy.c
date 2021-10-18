/*
** EPITECH PROJECT, 2020
** day 06 
** File description:
** task 1 
*/

#include <stdio.h>
 
char *my_strcpy(char *dest , char  const *src)
{
    int d = 0;
    while(src[d] != '\0')
    {
        dest[d] = src[d];
        d = d + 1;
    }
    dest[d] = '\0';
    return(dest);
}
