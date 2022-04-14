#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: takes in a value to compute
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int j = 0;

	int k = 0;

	if (n > 0)
	{
		while (j < n)
		{
			while (k < j)
			{
				_putchar(' ');
				k++;
			}
			k = 0;
			_putchar('\\');
			j++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}


