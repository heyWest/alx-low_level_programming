#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: head node
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *acc;

	while ((acc = head) != NULL)
	{
		head = head->next;
		free(acc->str);
		free(acc);
	}
}
