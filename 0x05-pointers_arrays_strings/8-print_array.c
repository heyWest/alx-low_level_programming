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
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar('\n');
}
