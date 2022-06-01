#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int active;
	int i, acc = 0;

	for (i = 63; i >= 0; i--)
	{
		active = n >> i;
		if (active & 1)
		{
			_putchar('1');
			acc++;
		}
		else if (acc)
			_putchar('0');
	}
	if (!acc)
		_putchar('0');
}
