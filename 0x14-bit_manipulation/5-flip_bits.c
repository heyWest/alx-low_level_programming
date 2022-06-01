#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: number
 * @m: other number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int active;
	unsigned long int xor = n ^ m;
	int i, acc = 0;

	for (i = 63; i >= 0; i--)
	{
		active = xor >> i;
		if (active & 1)
			acc++;
	}
	return (acc);
}
