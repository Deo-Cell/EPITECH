/*
** EPITECH PROJECT, 2020
** vector
** File description:
** vector
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "structures.h"

my_vector vector(float x, float y, float z)
{
    my_vector vector1 = {x, y, z};
    return vector1;
}

my_vector add_vector(my_vector vector1, my_vector vector2)
{
    my_vector vector3 = {vector1.x + vector2.x,
        vector1.y + vector2.y,
        vector1.z + vector2.z};
    return (vector3);
}

my_vector subs_vector(my_vector vector1, my_vector vector2)
{
    my_vector vector3 = { vector2.x - vector1.x,
        vector2.y - vector1.y,
        vector2.z - vector1.z};
    return vector3;
}

my_vector m_vector(my_vector vector1, int m)
{
    my_vector vector3 = {vector1.x*m,
        vector1.y*m, vector1.z*m};
    return vector3;
}

float norm_vector(my_vector vector1)
{
    float nb = {sqrt((vector1.x*vector1.x) +
                     (vector1.y*vector1.y) +
                     (vector1.z*vector1.z))};
    return nb;
}
