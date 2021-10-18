/*
** EPITECH PROJECT, 2020
** display
** File description:
** size
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb);

int display_name(char *str);

int display_size1(int len, int lag)
{
    int i = 0;
    char *str;
    int x = len;
    int y = lag;

    while ( str[i] != '\0') {
        if ( x >= 3 && y >= 3 ) {
        my_put_nbr(x);
        my_putchar(' ');
        my_put_nbr(y);
    }
        if ( x <= 0 || y <= 0 )
        return (84);
    i++;
    }
    return (0);
}
