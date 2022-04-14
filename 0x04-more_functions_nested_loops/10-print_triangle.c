#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: takes in a value to compute
 * Return: Always 0.
 */
void print_triangle(int size)
{
	if (size > 0)
	{
		int i = 0;

		int k = 0;

		int j = 0;

		int n = size - 1;

		while (i < size)
		{
			while (j < n)
			{
				_putchar(' ');
				j++;
			}
			while (k < (i + 1))
			{
				_putchar('#');
				k++;
			}
			k = 0;
			j = 0;
			n--;
			_putchar('\n');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
