/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** concatenates two strings
*/

int my_strlen(char const *str);

char *my_strcat(char *dest , char  const *src)
{
    int i;
    int j;

    for (i = (my_strlen(dest)),j = 0;src[j] != '\0';i++,j++)
        dest[i] = src[j];
    return (dest);
}
