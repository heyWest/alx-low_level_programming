#include "main.h"

/**
 * print_square - prints a square
 * @size: takes in a value
 * Return: Always 0.
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i = 0;

		int j = 0;

		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			j = 0;
			i++;
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
