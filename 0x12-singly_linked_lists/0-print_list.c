#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->l, h->str);
		h = h->next;
		size++;
	}
	return (size);
}
