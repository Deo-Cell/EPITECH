/*
** EPITECH PROJECT, 2020
** day7
** File description:
** eighteen
*/

#include <stdlib.h>

int my_srtlen (char const *str1);

char *my_strupcase(char *str) {

    int d = 0;
    char *str1;
    int l = my_strlen(str1);

    str1 = malloc(sizeof(char) * (l + 1));
    while (str[d] != '\0') {
        if (('a' <= str[d]) &&(str[d] <= 'z'))
            str1[d] = str[d] - 32;
        d++;
    }
    return (str);
}
