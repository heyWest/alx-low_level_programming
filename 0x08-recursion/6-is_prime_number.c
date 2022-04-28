#include "main.h"

/**
 * checkPrime - checks for prime
 * @num: number
 * @i: base
 * Return: 1 or 0
 */
int checkPrime(int num, int i)
{
	if (num <= 2)
	{
		if (num == 2)
			return (1);
		else
			return (0);
	}
	if (num % i == 0)
	{
		return (0);
	}
	if (i * i > num)
	{
		return (1);
	}
	return (checkPrime(num, i + 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a prime number, else 0.
 * @n: integer value
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	checkPrime(n, 2);
}
