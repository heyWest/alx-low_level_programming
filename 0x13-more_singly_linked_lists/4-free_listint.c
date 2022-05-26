#include "lists.h"

/**
 * free_listint - a function that frees a list
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *acc;

	while (head)
	{
		acc = head->next;
		free(head);
		head = acc;
	}
}
