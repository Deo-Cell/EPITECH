/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** Reproduce the behavior of thestrncmpfunction
*/

int my_strlen(char const *str);

int  my_strncmp(char  const *s1 , char  const *s2 , int n)
{
    int i;
    int h;

    if ((my_strlen(s1) != my_strlen(s2)) || (my_strlen(s1) <= n))
        return (0);
    else if ((my_strlen(s2) <= n))
        return (0);
    else {
        for (i = 0;i <= n;i++) {
            if (s1[i] == s2[i])
                h++;
            if (h == n)
                return (1);
            else
                return (0);
        }
    }
}
