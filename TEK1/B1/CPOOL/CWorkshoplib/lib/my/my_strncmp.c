/*
** EPITECH PROJECT, 2020
** day7
** File description:
** seventeen
*/

int my_strlen(char const *str);

int  my_strncmp(char  const *s1 , char  const *s2 , int n)
{

    int a = 0;
    int b = 0;

    if ((my_strlen(s1) != my_strlen(s2)) || (my_strlen(s1) <= n))
        return (0);
    else if ((my_strlen(s2) <= n))
        return (0);
    else {
        while (a <= n) {
            if (s1[a] == s2[a])
                a++;
            b++;
        }
            if (b == n)
                return (1);
            else
                return (0);
        }
    }
