#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: points to first integer value
 * @b: points to second integer value
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
