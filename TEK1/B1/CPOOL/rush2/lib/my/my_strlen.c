/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** count the number of character
*/

int  my_strlen(char  const *str)
{
    int i;

    for (i = 0;str[i] != '\0';i++);
    return (i);
}
