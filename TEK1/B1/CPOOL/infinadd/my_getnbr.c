/*
** EPITECH PROJECT, 2020
** getnbr
** File description:
** my_getnbr
*/

int my_getnbr(char const *str)
{
    int i = 0;
    int nb = 0;
    int m = 1;
    while ( str[i] == '-' || str [i] == '+' )
    {
        if ( str[i] == '-')
        {
            m = m * -1;
        }
        i++;
    }

    while ( str[i] >= '0' && str[i] <= '9')
    {
       if ( (nb < 2147483648) || (nb == 2147483648) && str[i] == '7')
            nb = nb * 10;
        nb = nb + str[i] -48;
        i++;
    }
    return (nb * m);
}
