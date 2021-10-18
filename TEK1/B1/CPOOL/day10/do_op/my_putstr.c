/*
** EPITECH PROJECT, 2020
** make
** File description:
** my_putstr
*/

#include <unistd.h>
void my_putchars(char c) {
    write (2, &c, 1);
}
int  my_putstr(char  const *str)
{
    int i;

    for ( i = 0;str[i] != '\0';i++)
        my_putchars(str[i]);
    return (0);
}
