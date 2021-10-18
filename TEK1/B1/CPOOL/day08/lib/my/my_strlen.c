/*
** EPITECH PROJECT, 2020
** day7
** File description:
** 5
*/

int  my_strlen(char  const *str)
{
     int r ;
     r = 0;
     while (str[r] != '\0')
{
        r = r + 1;
}
     return(r);

}
