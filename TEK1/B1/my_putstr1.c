/*
** EPITECH PROJECT, 2020
** put
** File description:
** str
*/

#include <unistd.h>

void my_putchar(char c);

int my_putstr1(char const *str)
{
    int i = 4;

    while(str[i] != '\0'){
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
