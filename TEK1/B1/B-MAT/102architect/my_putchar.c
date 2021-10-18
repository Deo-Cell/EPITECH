/*
** EPITECH PROJECT, 2020
** my
** File description:
** putchar
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
