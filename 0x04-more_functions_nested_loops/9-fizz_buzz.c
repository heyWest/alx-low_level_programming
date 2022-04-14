#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: void
 */
int main(void)
{
	int m = 1;

	while (m < 100)
	{
		if ((m % 3 == 0) && (m % 5 != 0))
			printf("Fizz ");
		else if ((m % 5 == 0) && (m % 3 != 0))
			printf("Buzz ");
		else if ((m % 5 == 0) && (m % 3 == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", m);
		m++;
	}
	printf("Buzz\n");
	return (0);
}
