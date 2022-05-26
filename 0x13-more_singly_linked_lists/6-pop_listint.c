#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a list
 * and returns the head node's data
 * @head: head node
 * Return: data in head node
 */
int pop_listint(listint_t **head)
{
	listint_t *acc;
	int data;

	if (!head || !*head)
		return (0);
	data = (*head)->n;
	acc = (*head)->next;
	free(*head);
	*head = acc;
	return (data);
}
