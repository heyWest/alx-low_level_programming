#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	long long max = 612852475143;

	int divisor = 2;

	while (max > 2)
	{
		if (max % divisor == 0)
			max /= divisor;
		else
			divisor++;
	}
	printf("%ld\n", divisor);
	return (0);
}
