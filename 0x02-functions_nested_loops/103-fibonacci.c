#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long a = 1;

	long b = 2;

	int i;

	unsigned int sum;

	unsigned int fin = 2;

	for (i = 3; i <= 32; i++)
	{
		sum = a + b;
		if (sum % 2 == 0)
		{
			fin += sum;
		}
		a = b;
		b = sum;
	}
	printf("%u\n", fin);
	return (0);
}
