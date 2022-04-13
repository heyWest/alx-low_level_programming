#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int counter = 0;

	int m;

	for (m = 3; m < 1024; m++)
	{
		if (m % 3 == 0 || m % 5 == 0)
		{
			counter += m;
		}
	}
	printf("%d\n", counter);
	return (0);
}
