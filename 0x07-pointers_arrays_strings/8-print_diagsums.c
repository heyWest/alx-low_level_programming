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
	int i, j;

	int acc1 = 0;

	int acc2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				acc1 += a[i][j];
			}
			else if (j + i == size - 1)
			{
				acc2 += a[i][j];
			}
		}
	}
	printf("%i", "%i\n", acc1, acc2);
}
