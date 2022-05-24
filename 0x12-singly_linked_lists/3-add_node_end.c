#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: head node
 * @str: string to add
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t iter;

	list_t *node, *acc;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
		for (iter = 0; str[iter]; iter++)
			;
		node->len = iter;
		node->next = NULL;
		acc = *head;
		if (acc == NULL)
		{
			*head = node;
		}
		else
		{
			while (acc->next != NULL)
				acc = acc->next;
			acc->next = node;
		}
		return (*head);
	}
}
