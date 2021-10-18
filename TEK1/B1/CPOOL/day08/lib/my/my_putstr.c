/*
** EPITECH PROJECT, 2020
** day7
** File description:
** five
*/
#include <unistd.h>

int  my_putstr(char  const *str)
{
    
    int   r;
    r = 0;
    while ( str[r] != '\0')
    {
        my_putchar(str[r]);
        r = r + 1;
    }
}

