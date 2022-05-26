#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head node
 * @index: index
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *acc = head;

	while (acc && n < index)
	{
		acc = acc->next;
		n++;
	}
	return (acc ? acc : NULL);
}
