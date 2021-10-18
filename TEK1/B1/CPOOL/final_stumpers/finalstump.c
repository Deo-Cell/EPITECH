/*
** EPITECH PROJECT, 2020
**final
** File description:
** final
*/

#include <stddef.h>
#include <unistd.h>
#include "rush3.h"

void my_putchar(char c);

int my_putstr(char const *str);

int my_put_nbr(int nb);

int display_name1(char *str);

int display_size1(int x, int y);

int final(char *str, int x, int y);

int main(void)
{
    char buff[1000 + 1];
    int offset = 0;
    int len;

    while ((len = read(0, buff + offset, 1000 - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
