/*
** EPITECH PROJECT, 2020
** get_nbr
** File description:
** get
*/

int my_getnbr(char const *str)
{
    int i = 0, a = 0, b = 1;

    for (; str[i] == '-' || str[i] == '+'; i++) {
        if (str[i] == '-')
            b = b * (-1);
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        a = a * 10 + str[i] - '0';
    }
    return (a * b);
}
