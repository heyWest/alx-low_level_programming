#include "lists.h"

/**
 * listint_len - a function that returns the
 * number of elements in a linked list
 * @h: list
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t size;

	size = 0;
	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
