#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 49;

	int i;
	int m;

	for (i = 48; i < 57; i++)
	{
		for (m = x; m <= 57; m++)
		{
			putchar(i);
			putchar(m);
			if (i == 56 && m == 57)
				break;
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
