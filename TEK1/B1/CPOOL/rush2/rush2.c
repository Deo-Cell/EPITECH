/*
** EPITECH PROJECT, 2020
** rush2
** File description:
** What language is this
*/

#include <unistd.h>
#include "my.h"

int alphn(char c)
{
    if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
        return (1);
    else
        return (0);
}

int cmptal(char const *str)
{
    int i;
    int j = 0;

    for (i = 0;str[i] != '\0';i++) {
        if (alphn(str[i]) == 1)
            j++;
    }
    return (j);
}

void my_frequence (int d,float c)
{
    int n;
    float f;

    f = ((d * 100)/c);
    n = f;
    my_put_nbr(n);
    my_putchar('.');
    f = ((f - n) * 100);
    n = f;
    if (n == 0) {
        my_putchar('0');
        my_putchar('0');
    }
    else
        my_put_nbr(f);

}

int language (char **tab ,int j)
{
    int i;
    int k = 0;

    if ((tab[j][0] >= 'a') && (tab[j][0] <= 'z'))
        my_strlowcase(tab[1]);
    else if ((tab[j][0] >= 'A') && (tab[j][0] <= 'Z'))
        my_strupcase(tab[1]);
    for (i = 0; tab[1][i] != '\0';i++) {
        if (tab[j][0] == tab[1][i])
            k++;
    }
    return (k);
}

int main (int argc,char **argv)
{
    float n;
    int i;

    n = cmptal(argv[1]);
    for (i = 2;i < argc;i++) {
        if (alphn(argv[i][0]) == 1) {
            my_putchar(argv[i][0]);
            my_putchar(':');
            my_put_nbr(language(argv,i));
            my_putchar(' ');
            my_putchar('(');
            my_frequence(language(argv, i), n);
            my_putchar('%');
            my_putchar(')');
            my_putchar('\n');
        }
        else
            return (84);
    }
    return (0);
}
