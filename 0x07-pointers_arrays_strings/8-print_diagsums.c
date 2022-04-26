#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size of array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;

	int acc1 = 0;

	int acc2 = 0;

	for (i = 0; i < size; i++)
	{
		acc1 += *(a + i * size + i);
		acc2 += *(a + i * size + size - i - 1);
	}
	printf("%i, %i\n", acc1, acc2);
}
