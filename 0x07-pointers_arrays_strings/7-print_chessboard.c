#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int c = 0;

	int b;

	while (c < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar(a[c][b]);
			b++;
		}
		_putchar('\n');
		c++;
	}
}
