/*
** EPITECH PROJECT, 2020
** 101pong
** File description:
** 101pong
*/

#include <stdlib.h>
#include <stdio.h>
#include "structures.h"
#include <math.h>
#include "my_macro_abs.h"

void usage(void);

int error(char *str);

my_vector vector(float x, float y, float z);

my_vector m_vector(my_vector vector1, int m);

my_vector add_vector(my_vector vector1, my_vector vector2);

my_vector subs_vector(my_vector vector1, my_vector vector2);

int isnum(char *str);

float norm_vector(my_vector vector1);

my_vector velocity(my_vector vector1, my_vector vector2)
{
    my_vector vector3;
    vector3 = subs_vector(vector2, vector1);
    return vector3;
}

my_vector coordinates(my_vector vector1, my_vector vector2, int n)
{
    my_vector vector3;
    my_vector vector4;
    my_vector vector5;
    vector3 = velocity(vector2, vector1);
    vector4 = m_vector(vector3, n);
    vector5 = add_vector(vector4, vector2);
    return vector5;
}

float angle(my_vector vector1, my_vector vector2)
{
    float ang;
    float nb;
    my_vector vector3;
    float result;
    float conversion;
    float n;

    vector3 = velocity(vector2, vector1);
    nb = norm_vector(vector3);
    n = (-vector2.z) / vector3.z;
    if (vector3.z != 0 && n >= 0) {
        ang = ABS(vector3.z / nb);
        result = asin(ang);
        conversion = (180 * result) / M_PI;
        printf("The incidence angle is:\n");
        printf("%.2f degrees\n", conversion);
        return conversion;
    }
    else
        printf("The ball won't reach the paddle.\n");
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h' && av[1][2] == '\0'){
        usage();
        return (0);
    }
    if (ac != 8)
        return 84;
    if (ac == 8) {
        my_vector vector1 = vector(atof(av[1]), atof(av[2]), atof(av[3]));
        my_vector vector3;
        my_vector vector4;
        float nb;
        my_vector vector2 = vector(atof(av[4]), atof(av[5]), atof(av[6]));
        printf ("The velocity vector of the ball is:\n");
        vector3 = velocity(vector2, vector1);
        printf ("(%.2f, %.2f, %.2f)\n", vector3.x, vector3.y, vector3.z);
        printf ("At time t + %d, ball coordinates will be:\n", atoi(av[7]));
        vector4 = coordinates(vector1, vector2, atoi(av[7]));
        printf ("(%.2f, %.2f, %.2f)\n", vector4.x, vector4.y, vector4.z);
        nb = angle(vector1, vector2);
    }
    return 0;
}
