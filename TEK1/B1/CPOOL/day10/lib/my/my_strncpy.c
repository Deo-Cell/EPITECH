/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** copiesncharacters from a string into another
*/

char *my_strncpy(char *dest , char  const *src , int n)
{
    int i;
    int j;

    for (i = 0; src[i] != '\0';i++);
    if (n <= i) {
        for (i = 0;i < n;i++)
            dest[i] = src[i];
        return (dest);
    }
    else {
        for (j = 0;j < i;j++)
            dest[j] = src[j];
        dest[j] = '\0';
        return (dest);
    }
}
