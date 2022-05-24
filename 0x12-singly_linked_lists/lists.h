#ifndef _LIST_
#define _LIST_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_sing - implementing a singly linked list
 * @str: string
 * @l: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_sing
{
    char *str;
    unsigned int l;
    struct list_sing *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
