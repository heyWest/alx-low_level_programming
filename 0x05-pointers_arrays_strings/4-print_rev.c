#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: takes in a string pointer as a parameter
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i, j = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
