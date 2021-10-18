/*
** EPITECH PROJECT, 2020
** display
** File description:
** display_name
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str);

int display_name1(char *str)
{
    int i = 0;
    int len = 1;
    int lag = 1;
    int x = len;
    int y = lag;

    while (str[i] != '\0'){
        if ( x >= 3 && y >= 3 ) {
            my_putchar('[');
            my_putstr("rush1-1");
            my_putchar(']');
            my_putchar(' ');
        }
        i++;
        return (0);
    }
    return (0);
}
