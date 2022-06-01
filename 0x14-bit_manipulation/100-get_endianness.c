#include "main.h"

/**
 * get_endianness - function that checks endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	unsigned int j;
	char *acc = (char *)&j;

	return (*acc);
}
