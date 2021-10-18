/*
** EPITECH PROJECT, 2020
** my_strupcase
** File description:
** puts every letter of every word in it in uppercase
*/

char *my_strupcase(char *str)
{
    int i;

    for (i = 0;str[i] != '\0';i++) {
        if (('a' <= str[i]) &&(str[i] <= 'z'))
            str[i] = str[i] - 32;
    }
    return (str);
}
