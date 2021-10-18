/*
** EPITECH PROJECT, 2020
** day7
** File description:
** 4
*/

char *my_strncpy(char *dest , char  const *src , int n) {

    int d = 0;

    while (src[d] != '\0') {
            if ( n < d) {
                dest[d] = src[d];
            } else
                if ( n > d) {
                    dest[d] = src[d];
                }
            d++;
    }
        dest[d] = '\0';
        return(dest);
    }
