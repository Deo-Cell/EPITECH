/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** concatenatesncharacters of thesrcstring to the end of the dest string
*/

int my_strlen(char const *str);

char *my_strncat(char *dest , char  const *src , int nb)
{
    int i;
    int j;

    for (i = (my_strlen(dest)),j = 0;(src[j] != '\0') || (j <= nb);i++,j++)
        dest[i] = src[j];
    return (dest);
}
