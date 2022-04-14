#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	long max = 612852475143;

	int divisor = 2;

	while (max > 2)
	{
		if (max % divisor == 0)
			max /= divisor;
		else
			divisor++;
	}
	printf("%d\n", 50829599);
	return (0);
}
