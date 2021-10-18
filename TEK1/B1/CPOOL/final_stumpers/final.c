/*
** EPITECH PROJECT, 2020
** final
** File description:
** final
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int nb);

int display_name1(char *str);

int display_size1(int x, int y);

int final(char *str, int x, int y)
{
    int d = 0;

    while ( str[d] != '\0' ) {
        if ( x >= 3 && y >= 3 ) {
            my_putstr("display_name1");
            my_putstr("display_size1");
        }
        if ( x <= 0 || y <= 0 )
            return (84);
        d++;
    }
    return (0);
}
