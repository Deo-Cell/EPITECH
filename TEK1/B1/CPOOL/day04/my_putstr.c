/*
** EPITECH PROJECT, 2020
** put
** File description:
** out
*/

int  my_putstr(char  const *str)
{
    
    int   r;
    r = 0;
    while ( str[r] != '\0')
    {
        my_putchar(str[r]);
        r = r + 1;
    }
}

