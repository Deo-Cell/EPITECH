/*
** EPITECH PROJECT, 2020
** day7
** File description:
** task03
*/

#include <unistd.h>

char *my_strncat(char *dest , char  const *src , int nb)
{
    
    int i = 0;
    int n;    int d = 0;

    while (dest[i] != '\0')
    {
        i++;
    }
    while (src[d] != '\0')
    {
        dest[i] = src[d];

        i++;
        d++;
    }
    if ( d < n)
    {
        dest[i] = src[d];
    }
    dest[i] = '\0';
    return(dest);
}

