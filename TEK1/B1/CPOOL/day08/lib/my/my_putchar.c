/*
** EPITECH PROJECT, 2020
** day7
** File description:
** one
*/
#include <unistd.h>
void my_putchar(char c)
{
    write (1, &c, 1);
}
