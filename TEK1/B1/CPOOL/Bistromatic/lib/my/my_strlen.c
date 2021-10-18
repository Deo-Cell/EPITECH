/*
** EPITECH PROJECT, 2020
** str_len
** File description:
** len_str
*/

int my_strlen(char const *str)
{
    int u = 0;

    while (str[u] != '\0' ) {
        u++;
    }
    return (u);
}
