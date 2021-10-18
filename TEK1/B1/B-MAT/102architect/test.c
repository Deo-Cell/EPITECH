/*
** EPITECH PROJECT, 2020
** test
** File description:
** test
*/

#include <math.h>
#include "structures.h"
#include <stdlib.h>
#include <stdio.h>

void usage (void);

void my_putchar(char c);

int my_str_isnum(char const *str);

my_vector translate(float x, float y, float i, float j);

my_vector scaling(float x, float y, float i, float j);

my_vector rotation(float x, float y, float z);

my_vector reflection(float x, float y, double z);

int main (int ac, char **av)
{
    char *str;
    int i = 0;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0'){
        usage();
        return (0);
    }
    if (ac == 1 || ac <= 4){
        return (84);
    }
    my_vector vect;
    my_vector vecto;
    float x = atof(av[1]);
    float y = atof(av[2]);
    float z = atof(av[4]);
    float ang = atof(av[4]);

    if (ac == 6 && av[3][0] == '-' && av[3][1] == 't') {
        my_str_isnum(av[1]);
        my_str_isnum(av[2]);
        my_str_isnum(av[4]);
        my_str_isnum(av[5]);
        vect = translate(x, y, z, atof(av[5]));
    }
    else if(ac == 6 && av[3][0] == '-' && av[3][1] == 'z'){
        my_str_isnum(av[5]);
        my_str_isnum(av[1]);
        my_str_isnum(av[2]);
        my_str_isnum(av[4]);
        vect = scaling(x, y, z, atof(av[5]));
    }
    else if (ac == 5 && av[3][0] == '-' && av[3][1] == 'r'){
        my_str_isnum(av[4]);
        my_str_isnum(av[1]);
        my_str_isnum(av[2]);
        if (ang < 0)
            return(84);
        vect = rotation(x, y, ang);
    }
    else if (ac == 5 && av[3][0] == '-' && av[3][1] == 's'){
        my_str_isnum(av[4]);
        my_str_isnum(av[1]);
        my_str_isnum(av[2]);
        if (ang < 0)
            return (84);
        vect = reflection(x, y, ang);
    }
    else
        return (84);
    return (0);
}
