/*
** EPITECH PROJECT, 2020
** print
** File description:
** digit
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_digits(void);

int my_print_comb(void)
{
    char *str;
    for (int n = '0'; n <= '9'; n++){
        my_putchar(n);
        if (str[n] != '\0') {
            my_putchar(n);
            n++;
        }
    }
    return (0);
}
