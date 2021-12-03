/*
** EPITECH PROJECT, 2020
** my_ls
** File description:
** my_ls
*/

#define _POSIX_C_SOURCE 1
#include <string.h>
#include <dirent.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

void my_putchar(char c);

int my_strlen(char const *str);

int function(char *str, char *al);

char *my_strncpy(char *dest, char *src, int n);

int my_putstr(char const *str);

int my_putstr1(char const *str);

void times(char const *name);

void rights(char const *name);

void open_repertory(const char *name)
{
    struct stat s;
    struct dirent *al;
    DIR *d = opendir(name);

    if(d == NULL)
        my_putstr("could not open dir");
    while ((al = readdir(d)) != NULL) {
        if(al->d_name[0] != '.') {
            stat(al->d_name, &s);
            my_putstr(al->d_name);
            my_putchar('\n');
        }
    }
    closedir(d);
}

void open_repertory1(const char *name)
{
    struct stat s;
    struct dirent *al;
    DIR *d = opendir(name);

    if(d == NULL)
        my_putstr("could not open dir");
    while ((al = readdir(d)) != NULL) {
        stat(al->d_name, &s);
        my_putstr(al->d_name);
        my_putchar('\n');
    }
    closedir(d);
}

void directory(char const *name)
{
    struct stat s;
    struct dirent *al;
    DIR *d = opendir(name);

    while ((al = readdir(d)) != NULL) {
        if (al->d_name[0] != '.') {
            ((S_ISDIR(s.st_mode)) ? open_repertory(name) : 0);
            stat(al->d_name, &s);
            my_putstr(al->d_name);
            my_putchar('\n');
        }
    }
    closedir(d);
}

int main(int ac, char **av)
{
    if (ac == 1)
        open_repertory(".");
    if(ac == 2 && av[1][0] == '-' && av[1][1] == 'l' && av[1][2] == '\0'){
        rights(".");
        return (0);
    }
    if(ac == 2 && av[1][0] == '-' && av[1][1] == 'R' && av[1][2] == '\0'){
        open_repertory1(".");
        return(0);
    }
    if (ac == 2 && av[1][0] != '-' && av[1][1] != 'l'){
        directory(av[1]);
        return (0);
    }
    if(ac == 2 && (av[1][0] != '-' || av[1][1] != 'l'))
        return (84);
    if(ac == 2 && (av[1][0] != '-' || av[1][1] != 'R'))
        return (84);
}
