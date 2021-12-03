/*
** EPITECH PROJECT, 2020
** rights
** File description:
** rights
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

void times(char const *name)
{
    struct stat s;
    struct stat al;
    char mt[26];
    char *str;
    int i = 4;
    if (stat(name, &al) != 0) return;
    my_strncpy(mt, ctime(&(s.st_mtime)), 26);
    mt[my_strlen(mt) - 1] = '\0';
    my_putchar(' ');
    my_putstr1(mt);
    my_putchar(' ');
}

void rights(char const *name)
{
    struct dirent *al;
    struct stat s;
    DIR *d = opendir(name);

    if (d == NULL)
        my_putstr("could not open dir");
    my_putstr("total ");
    my_putchar('\n');
    while ((al = readdir(d)) != NULL) {
        if (al->d_name[0] != '.') {
            stat(al->d_name, &s);
            ((S_ISDIR(s.st_mode)) ? my_putchar('d') : my_putchar('-'));
            ((s.st_mode & S_IRUSR) ? my_putchar('r') : my_putchar('-'));
            ((s.st_mode & S_IWUSR) ? my_putchar('w') : my_putchar('-'));
            ((s.st_mode & S_IXUSR) ? my_putchar('x') : my_putchar('-'));
            ((s.st_mode & S_IRGRP) ? my_putchar('r') : my_putchar('-'));
            ((s.st_mode & S_IWGRP) ? my_putchar('w') : my_putchar('-'));
            ((s.st_mode & S_IXGRP) ? my_putchar('x') : my_putchar('-'));
            ((s.st_mode & S_IROTH) ? my_putchar('r') : my_putchar('-'));
            ((s.st_mode & S_IWOTH) ? my_putchar('w') : my_putchar('-'));
            ((s.st_mode & S_IXOTH) ? my_putchar('x') : my_putchar('-'));
            times(al->d_name);
            my_putstr(al->d_name);
            my_putchar('\n');
        }
    }
    closedir(d);
}
