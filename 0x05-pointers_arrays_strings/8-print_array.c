#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: first parameter
 * @n: second parameter
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		int i = 0;

		while (i < n - 1)
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[n - 1]);
	}
	else
	{
		printf("\n");
	}
}
