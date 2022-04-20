#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: takes a string pointer as a parameter
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
