/*
** EPITECH PROJECT, 2020
** day7
** File description:
**
*/

int my_strlen(char const *str);

int  my_strcmp(char  const *s1 , char  const *s2) {

    int a = 0;
    int g;

    if (my_strlen(s1) != my_strlen(s2))
        return (0);
    else {
        while (s1[a] != '\0') {
            if (s1[a] == s2[a])
                a++;
            g++;
        }
        if (g == my_strlen(s1))
            return (1);
        else
            return (0);
    }
}
