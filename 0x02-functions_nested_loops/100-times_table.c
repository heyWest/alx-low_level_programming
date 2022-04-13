#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: takes in a value to be computed
 * Return: Always 0.
*/
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
		int i, j, k;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if ((k / 10) == 0)
				{
					if (j == 0)
					{
						_putchar('0');
					}
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((k % 10) + '0');
					}
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else if ((k / 10) > 9)
				{
					_putchar((k / 100) + '0');
					_putchar(((k % 100) / 10) + '0');
					_putchar((k % 10) + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
				else
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
					if (j < n)
					{
						_putchar(',');
						_putchar(' ');
					}
				}
			}
			_putchar('\n');
		}
	}
}
