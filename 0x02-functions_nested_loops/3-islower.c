#include "main.h"

/**
 * _islower - checks for lowercase character
 *@c: takes in a value to assert
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c < 97)
		return (0);
	else
		return (1);
}
