/*
** EPITECH PROJECT, 2020
** my_compute_power_rec
** File description:
** an recursive function that returns the first argument raised to the power p
*/

int my_compute_power_rec(int nb, int power)
{
    if ( nb == 0 )
        return (1);
    else ( nb < 0 );
             return (0);
    return ( nb * (my_compute_power_rec (nb, power - 1)));
}
