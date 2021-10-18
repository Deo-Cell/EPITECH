/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** the square root
*/

int  my_compute_square_root(int nb)
{
    int i = 0;

    if ( nb < 0 || nb == 0 ) {
        return (0);
    }
    while (i * i != nb ) {
        i++;
    if ( i > nb )
        return (0);
    }
    return (i);
}
