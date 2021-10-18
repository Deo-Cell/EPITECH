/*
** EPITECH PROJECT, 2020
** my putch1
** File description:
** file descript
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int           my_print_revalpha(void)
{
    for(char d = 'z';d >='a';d--)
           my_putchar(d);
           return (0);
}
