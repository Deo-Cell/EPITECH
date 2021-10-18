/*
** EPITECH PROJECT, 2020
** i,finadd
** File description:
** infinadd
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);

int my_getnbr(char const *str);

int my_put_nbr(int nb);

int infin_add(char *fg1, char *fg2 )
{
        int f1 = my_getnbr(fg1);
        int f2 = my_getnbr(fg2);
        int res = 0;
        res = malloc(sizeof(char) * (res + 1));
        res = f1 + f2;
        return (res);
}
int main(int ac, char **av)
{
    my_put_nbr(infin_add(av[1], av[2]));
    my_putchar('\n');
    return (0);
}
