#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int j;
	int k;
	int i;
	int l = 50;

	int m = 49;

	int n = 50;

	for (i = 48; i < 56; i++)
	{
		n = l;
		for (j = m; j < 57; j++)
		{
			k = n;
			while (k <= 57)
			{
				putchar(i);
				putchar(j);
				putcar(k);
				putchar(',');
				putchar(' ');
				k++;
			}
			n++;
		}
		m++;
		l++;
	}
	putchar('\n');
	return (0);
}
