/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** Reproduce the behavior of thestrcmpfunction
*/

int my_strlen(char const *str);

int  my_strcmp(char  const *s1 , char  const *s2)
{
    int i;
    int h;

    if (my_strlen(s1) != my_strlen(s2))
        return (0);
    else {
        for (i = 0;s1[i] != '\0';i++) {
            if (s1[i] == s2[i])
                h++;
        }
        if (h == my_strlen(s1))
            return (1);
        else
            return (0);
    }
}
