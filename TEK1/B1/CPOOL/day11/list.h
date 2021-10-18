/*
** EPITECH PROJECT, 2020
** list
** File description:
** list
*/

#ifndef list_h
#define list_h

struct s_list
{
    char first_name;
    char last_name;
    int age;
    struct s_list *next;
}
linked_list_t *my_put_in_list(struct s_list **list, char *first_name, char *last_name, int age);
linked_list_t *my_put_in_list(struct s_list *list);

#endif /* list_h */
