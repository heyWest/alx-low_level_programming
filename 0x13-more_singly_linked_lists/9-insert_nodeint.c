#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at a given position
 * @head: head node
 * @idx: index
 * @n: new node
 * Return: address of new node or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	
