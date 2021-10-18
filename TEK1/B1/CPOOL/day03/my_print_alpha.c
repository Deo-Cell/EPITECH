/*
** EPITECH PROJECT, 2020
** Coding file
** File description:
** my print alpha
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}

int my_print_alpha(void)
{
    for (char c = 'a';c <='z'; c++)
        my_putchar(c);
    return (0);
}
