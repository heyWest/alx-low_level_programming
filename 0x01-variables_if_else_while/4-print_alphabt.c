#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char b = 'a';

	while (b <= 'z')
	{
		if (b != 'q' && b != 'e')
			putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
