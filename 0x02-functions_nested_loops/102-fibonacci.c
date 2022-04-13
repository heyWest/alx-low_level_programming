#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int a = 1;

	int b = 2;

	int sum, i;

	printf("%d, %d, ", a, b);
	for (i = 3; i < 50; i++)
	{
		sum = a + b;
		printf("%d, ", sum);
		a = b;
		b = sum;
	}
	printf("%d\n", b + a);
	return (0);
}
