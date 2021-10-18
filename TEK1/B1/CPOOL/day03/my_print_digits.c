/*
** EPITECH PROJECT, 2020
** my print
** File description:
** Write a number
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
int     my_print_digits(void)
{
    for(char n = '0';n<='9';n++)
        my_putchar(n);
    return (0);
}
