/*
** EPITECH PROJECT, 2020
** day7
** File description:
** five
*/

#include <unistd.h>

void my_putchar (char c);

int  my_putstr(char  const *str)
{
    int   r;

    r = 0;
    while ( str[r] != '\0') {

        my_putchar(str[r]);
        r = r + 1;
    }
    return (0);
}
