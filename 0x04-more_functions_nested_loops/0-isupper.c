#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: takes in a value to assert
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
