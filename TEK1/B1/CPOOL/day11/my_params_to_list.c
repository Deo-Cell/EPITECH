/*
** EPITECH PROJECT, 2020
** day11
** File description:
** my_param_to_list
*/

#include <unistd.h>
#include <stdlib.h>
#include "mylist.h"
#include "list.h"

linked_list_t *my_params_to_list(struct s_list **list, char *first_name, char *list_name, int age)  {
    struct s_list *young;

    young = malloc(sizeof(*young));
    young->first_name = first_name;
    young->last_name = last_name;
    young->age = age;
    young->next = *list;
    *list = young;
    return (0);
}

linked_list_t *my_params_to_list(int ac, char * const *av) {
    struct s_list

    tmp = list;
    while (tmp != NULL) {
        my_putstr(tmp->first_name);
        my_putstr(" , ");
        my_putstr(tmp->lastname);
        my_putstr(" , ");
        my_putnbr(tmp->age);
        my_putchar('\n');
        tmp = tmp->next;
    }
}
int main() {
    struct s_list *list;
    list = NULL;
    my_put_list(&list, "Alex", "Ruffin", 19);
    my_put_list(&list, "Samo", "Oona", 18);
    return (0);
}
