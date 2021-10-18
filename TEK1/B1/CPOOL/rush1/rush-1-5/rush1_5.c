/*
** EPITECH PROJECT, 2020
** rush
** File description:
** rush
*/

#include <unistd.h>

int longueur2(int y)
{
    int i = 1;

    my_putchar('B');
    while (i < y - 1) {
        my_putchar('B');
        i++;
    }
    if (y > 1) {
        my_putchar('B');
    }
    my_putchar('\n');
}

int longueur(int y)
{
    int i = 1;

    my_putchar('A');
    while (i < y - 1) {
        my_putchar('B');
        i++;
    }
    if (y > 1) {
        my_putchar('C');
    }
    my_putchar('\n');
}

int longueur1(int y)
{
    int i = 1;

    if (y > 1)
        my_putchar('C');
    else
        my_putchar('B');
    while (i < y - 1) {
        my_putchar('B');
        i++;
    }
    if (y > 1) {
        my_putchar('A');
    }
    my_putchar('\n');
}

int larger(int x)
{
    int i = 1;

    my_putchar('B');
    while (i < x - 1) {
        my_putchar(' ');
        i++;
    }
    if (x > 1) {
        my_putchar('B');
    }
    my_putchar('\n');
}

int rush(int x, int y)
{
    int i = 1;

    if (x <= 0 || y <= 0) {
        write (2, "Invalid size\n", 13);
    } else { if (x > 0 || y > 0) {
            if (x == 1 || y == 1)
                longueur2(x);
            else
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
