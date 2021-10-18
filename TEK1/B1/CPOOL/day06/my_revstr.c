/*
** EPITECH PROJECT, 2020
** day6
** File description:
** task3
*/
#include <unistd.h>

char *my_revstr(char *str)
{
    int i = 0;
    int g = 0;
    int l;
    while (str[g] != '\0')
    {
        g++;
    }
    g = g - 1;
    while ( i <= g/2)
    {
        l = str[g];
        str[g] = str[i];
        str[i] = l;
        g--;
        i++;
    }
    return(str);
}

  
    
