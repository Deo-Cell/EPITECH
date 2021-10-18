/*
** EPITECH PROJECT, 2020
** error
** File description:
** error
*/

int error (char *str)
{
    int i = 0;

    while(str[i] != '\0') {
        if ((str[i] > 65 || str[i] < 91) - 48)
            return 84;
        i++;
    }
    return 84;
}
