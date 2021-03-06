#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: takes in a string pointer as a parameter
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i = 0;

	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		j = i / 2;
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	else
	{
		j = ((i - 1) / 2) + 1;
		while (j < i)
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar('\n');
}
