#include "main.h"
/**
 * print_chessboard - function that prints the chessboard
 * @a: array
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int a = 0;

	int b;

	while (a < 8)
	{
		b = 0;
		while (b < 8)
		{
			_putchar([a][b]);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
