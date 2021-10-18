/*
** EPITECH PROJECT, 2020
** usage
** File description:
** usage
*/

#include <unistd.h>
#include <stdio.h>

void usage(void)
{
        printf ("USAGE\n");
        printf("./101pong x0 y0 z0 x1 y1 z1 n\n");
        printf("DESCRIPTION\n");
        printf("x0 ball abscissa at time t - 1\n");
        printf("y0 ball ordinate at time t - 1\n");
        printf("z0 ball altitude at time t - 1\n");
        printf("x1 ball abscissa at time t\n");
        printf("y1 ball ordinate at time t\n");
        printf("z1 ball altitude at time t\n");
        printf("n time shift (greater than or equal to zero, integer)\n");
}
