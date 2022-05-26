#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data of a list
 * @head: head node
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *acc = head;
	int sum = 0;

	while (acc)
	{
		sum += acc->n;
		acc = acc->next;
	}
	return (sum);
}
