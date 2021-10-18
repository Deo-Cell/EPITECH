/*
** EPITECH PROJECT, 2020
** day10
** File description:
** do_op
*/
#include <math.h>
#include <stdio.h>
#include <unistd.h>

int my_putstr(char *str);
void my_putchars(char c);

void my_putchar(char c)
{
    write (1, &c, 1);
}
int my_put_nbr(int nb)
{
    int temp;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if ((nb >= 0) && (nb < 10))
        my_putchar(nb + '0');
    else if ( nb >= 10) {
        temp = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(temp + '0');
    }
    return (0);
}
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
        nb = nb * 10;
        nb = nb + str[i] -48;
        i++;
    }
    return (nb * m);
}

int do_calculate( char *fg1, char opr, char *fg2 )
{
    int f1 = my_getnbr(fg1);
    int f2 = my_getnbr(fg2);
    int y = 0;

        if (opr == '+')
            y = f1 + f2;
        else if (opr == '-')
            y = f1 - f2;
        else if (opr == '*')
            y = f1 * f2;
        else if (opr =='/')
            y = f1 / f2;
        else if (opr == '%')
            y = f1 % f2;
//        printf("f1 et f2 %d %d", f1 , f2);
        return(y);
}
int main(int ac, char **av)
{
    if (ac != 4)
        return (84);
    if ( av[2][0] == '/' && my_getnbr(av[3]) == 0) {
        my_putstr("Stop: division by zero\n");
        return (84);
    }
    if (av[2][0] == '%' && my_getnbr(av[3]) == 0) {
         my_putstr("Stop: division by zero\n");
            return (84);
        }
    my_put_nbr(do_calculate(av[1], av[2][0], av[3]));
    my_putchar('\n');
    return (0);
}
