/*
** EPITECH PROJECT, 2020
** rush
** File description:
** rush
*/

#include <unistd.h>

int longueur(int y)
{
    int j = 1;

    my_putchar('/');
    while (j < y - 1) {
        my_putchar('*');
        j++;
    }
    if (y > 1) {
        my_putchar('\\');
    }
    my_putchar('\n');
}

int longueur1(int y)
{
    int i = 1;

    my_putchar('\\');
    while (i < y - 1) {
        my_putchar('*');
        i++;
    }
    if (y > 1) {
        my_putchar('/');
    }
    my_putchar('\n');
}

int larger(int x)
{
    int i = 1;

    my_putchar('*');
    while (i < x - 1) {
        my_putchar(' ');
        i++;
    }
    if (x > 1) {
        my_putchar('*');
    }
    my_putchar('\n');
}

int rush(int x, int y)
{
    int i = 1;

    if (x <= 0 || y <= 0) {
        write (2, "Invalid size\n", 13);
    } else { if (x > 0 || y > 0) {
            longueur(x);
            while (i < y - 1) {
                larger(x);
                i++;
            }
            if (y > 1) {
                longueur1(x);
            }
        }
    }
}
