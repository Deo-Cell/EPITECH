/*
** EPITECH PROJECT, 2020
** day7
** File description:
** 8
*/

char *my_strcat(char *dest , char  const *src) {

    int i = 0;
    int d = 0;

    while (dest[i] != '\0') {

        i++;
    }
    while (src[d] != '\0') {

        dest[i] = src[d];

        i++;
        d++;
    }
    dest[i] = '\0';
    return(dest);
}
