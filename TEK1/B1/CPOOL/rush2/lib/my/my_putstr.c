/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** display the character of string
*/

void my_putchar(char c);

int  my_putstr(char  const *str)
{
    int i;

    for ( i = 0;str[i] != '\0';i++)
        my_putchar(str[i]);
    return (0);
}
