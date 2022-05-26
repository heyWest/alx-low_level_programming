#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: head node
 * @n: new node
 * Return: address of new node or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *acc;
	listint_t *reg = *head;

	acc = malloc(sizeof(listint_t));

	if (!acc)
		return (NULL);
	acc->n = n;
	acc->next = NULL;
	if (*head == NULL)
	{
		*head = acc;
		return (acc);
	}
	while (reg->next)
		reg = reg->next;
	reg->next = acc;
	return (acc);
}


