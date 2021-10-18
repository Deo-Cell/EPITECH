/*
** EPITECH PROJECT, 2020
** my_usage
** File description:
** usage
*/

#include "include/my.h"

void usage(char **av)
{
    my_putstr("USAGE\n");
    my_putstr("./calc base operators size_read\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("- base: all the symbols of the base\n");
    my_putstr("- operators: the symbols for ");
    my_putstr("the parentheses and the 5 operators\n");
    my_putstr("- size_read: number of characters to be read\n");
}
