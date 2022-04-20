#include "main.h"

/**
 * rev_string - reverses a string
 * @s: takes a string pointer as a parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i = _strlen(s) - 1;

	int k = 0;

	char new_str[_strlen(s)];

	while (i >= 0)
	{
		new_str[k] = str[i];
		i--;
		k++;
	}
	s = new_str;
}
