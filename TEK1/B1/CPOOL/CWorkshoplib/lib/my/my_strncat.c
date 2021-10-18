/*
** EPITECH PROJECT, 2020
** day7
** File description:
** 9
*/

char *my_strncat(char *dest , char  const *src , int nb)
{

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
    if ( d < nb ) {

        dest[i] = src[d];
    }
    dest[i] = '\0';
    return(dest);
}
