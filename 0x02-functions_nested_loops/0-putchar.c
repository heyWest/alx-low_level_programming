#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char str[] = "_putchar";

	int m = 0;

	while (m <= 8)
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
	return (0);
}
