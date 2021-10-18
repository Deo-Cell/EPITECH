/*
** EPITECH PROJECT, 2020
** my_put
** File description:
** put_nbrù
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb <= 9)
        my_putchar(nb + '0');
    if (nb > 9) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        my_put_nbr(nb);
    }
    return (0);
}
