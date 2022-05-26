#include "lists.h"

/**
 * add_nodeint - function that adds a new node at the beginning of a list
 * @head: head node
 * @n: new node
 * Return: address of new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *acc = malloc(sizeof(listint_t));

	if (!acc)
		return (NULL);
	acc->n = n;
	acc->next = *head;
	*head = new;
	return (acc);
}
