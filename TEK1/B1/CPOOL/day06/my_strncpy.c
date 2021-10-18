/*
** EPITECH PROJECT, 2020
** day06
** File description:
** task02
*/

#include <unistd.h>

char *my_strncpy(char *dest , char  const *src , int n)
{
    int d = 0;
    while (src[d] != '\0')
    {
        {
            if ( n < d)
            {
                dest[d] = src[d];
            } else 
                if ( n > d)
                {
                    dest[d] = src[d];
                }
            d = d + 1;}
        dest[d] = '\0';
    return(dest);
}

