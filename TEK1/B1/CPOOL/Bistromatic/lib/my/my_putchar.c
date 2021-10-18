/*
** EPITECH PROJECT, 2020
** putchatr
** File description:
** my_putcha
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
