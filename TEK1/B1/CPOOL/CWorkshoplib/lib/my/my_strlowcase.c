/*
** EPITECH PROJECT, 2020
** day7
** File description:
**
*/

#include <stdlib.h>

int my_strlen(char const *str1);

char *my_strlowcase(char *str)
{

    int a = 0;
    char *str1;
    int l = my_strlen(str1);

    str1 = malloc(sizeof(char) * ( l + 1));
    while (str[a] != '\0') {
        if (('A' <= str[a]) &&(str[a] <= 'Z'))
            str1[a] = str[a] + 32;
        a++;
    }
    return (str);
}
