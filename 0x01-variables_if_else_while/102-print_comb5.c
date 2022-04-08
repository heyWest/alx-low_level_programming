#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int m = 48;

	int o = 48;

	int n = 48;

	int i;
	int l;
	int j = 48;

	int k = 48;

	for (i = 48; i <= 57; i++)
	{
		m = i;
		for (j = n; j < 57; j++)
		{
			for (k = m; k <= 57; k++)
			{
				for (l = o; l <= 57; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56 && k == 57 && l == 57)
						break;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
