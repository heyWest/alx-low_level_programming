#include "main.h"

/**
 * factorial - return the factorial of a given number
 * @n: integer value
 * Return: factorial of integer value
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
