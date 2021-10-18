/*
** EPITECH PROJECT, 2020
** my_strlowcase
** File description:
** puts every letter of every word in it in lowercase
*/

char *my_strlowcase(char *str)
{
    int i;

    for (i = 0;str[i] != '\0';i++) {
        if (('A' <= str[i]) &&(str[i] <= 'Z'))
            str[i] = str[i] + 32;
    }
    return (str);
}
