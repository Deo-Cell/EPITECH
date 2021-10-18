/*
** EPITECH PROJECT, 2020
** day7
** File description:
** three
*/

#include <unistd.h>

void my_putchar(char c);

int my_put_nbr(int nb) {

    int temp;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if ((nb >= 0) && (nb < 10))
        my_putchar(nb + '0');
    else if ( nb >= 10) {
        temp = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(temp + '0');
    }
    return (0);
}
