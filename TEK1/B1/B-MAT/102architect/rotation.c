/*
** EPITECH PROJECT, 2020
** rotation
** File description:
** rotation
*/

#include <math.h>
#include "structures.h"
#include <stdlib.h>
#include <stdio.h>

my_vector rotation(float x, float y, float z)
{
    my_vector vector_V1;
    double c;
    c = (M_PI * z) / 180;
    float cosi = cos(c);
    float sinu = sin(c);
    printf("Rotation by a %.f degree angle\n", z);
    printf("%.2f\t%.2f\t%.2f\n", cosi, -sinu, 0.00);
    printf("%.2f\t%.2f\t%.2f\n", sinu, cosi, 0.00);
    printf("%.2f\t%.2f\t%.2f\n", 0.00, 0.00, 1.00);
    printf("(%.2f, %.2f) ", x, y);
    printf("=> ");
    vector_V1.x = (cosi * x) - (sinu * y);
    vector_V1.y = (sinu*x) + (cosi*y);
    printf("(%.2f, %.2f)\n", vector_V1.x, vector_V1.y);
    return (vector_V1);
}
