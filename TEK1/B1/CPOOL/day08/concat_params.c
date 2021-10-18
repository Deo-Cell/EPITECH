/*
** EPITECH PROJECT, 2020
** day8
** File description:
** task2
*/

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char *concat_params(int argc , char **argv)
{
    int i = 0;
    int g;
    char *str;
    while ( i < argc )
    {
        g += strlen(argv[i]);
                 i++;
    }
    str = malloc(sizeof(char) * (g + argc + 1));
    while ( i < argc )
    {
        my_strlen(str, argv[i]);
             my_putstr("\n");
        i++;
       
    }
    free(str);
            while ( argv[i] != NULL)
            {
                str[i] = argv[i][g];
                my_putchar("\n");
                i++;
                g++;
            }
      return(str);
}

