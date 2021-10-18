/*
** EPITECH PROJECT, 2020
** day 7
** File description:
** task02
*/

#include <unistd.h>

char *my_strcat(char *dest , char  const *src)
{
    int i = 0;
    int d = 0;

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
    dest[i] = '\0';
    return(dest);
}

        
        
  
