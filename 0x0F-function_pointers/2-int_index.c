#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: search function
 * Return: index of the first element for the cmp function that is an int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array && cmp)
	{
		for (a = 0; a < size; a++)
		{
			if (cmp(array[a] != 0))
				return (a);
		}
	}
	return (-1);
}
