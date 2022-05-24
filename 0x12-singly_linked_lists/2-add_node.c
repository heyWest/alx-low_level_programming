#include "lists.h"

/**
 * add_node - function that adds a new node at the begining of a list_t list
 * @head: head node
 * @str: string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t iter;

	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL)
	{
		return (NULL);
	}
	node->str = strdup(str);
	for (iter = 0; str[iter]; iter++)
		;
	node->len = iter;
	node->next = *head;
	*head = node;
	return (*head);
}
