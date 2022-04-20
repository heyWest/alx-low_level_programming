#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: takes in a string pointer as a parameter
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
