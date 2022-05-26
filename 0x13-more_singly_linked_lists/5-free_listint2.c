#include "lists.h"

/**
 * free_listint2 - function that frees a list
 * @head: head node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *acc;

	if (head == NULL)
		return;
	while (*head)
	{
		acc = (*head)->next;
		free(*head);
		*head = acc;
	}
	*head = NULL;
}
