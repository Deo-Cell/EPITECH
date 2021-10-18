/*
** EPITECH PROJECT, 2020
** translate
** File description:
** translate
*/

#include <math.h>
#include "structures.h"
#include <stdlib.h>
#include <stdio.h>

my_vector translate(float x, float y, float i, float j)
{
    my_vector vector_V1;
    printf("Translation along vector (%.f, %.f)\n", i, j);
    printf("%.2f\t%.2f\t%.2f\n", 1.00, 0.00, i);
    printf("%.2f\t%.2f\t%.2f\n", 0.00, 1.00, j);
    printf("%.2f\t%.2f\t%.2f\n", 0.00, 0.00, 1.00);
    printf("(%.2f, %.2f) ", x, y);
    printf("=> ");
    vector_V1.x = x + i;
    vector_V1.y = y + j;
    printf("(%.2f, %.2f)\n", vector_V1.x, vector_V1.y);
    return (vector_V1);
}
