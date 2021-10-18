/*
** EPITECH PROJECT, 2020
** day7
** File description:
** fifteen
*/

char *my_strstr(char *str , char  const *to_find)
{

    int i = 0;
    int d = 0;
    while (str[i] != '\0') {

        i++;
    }
    if (str[i] == to_find[d]) {
        i++;
        d++;
    }
    return(str);
}
