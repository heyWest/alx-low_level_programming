#include "main.h"

/**
 * rev_string - reverses a string
 * @s: takes a string pointer as a parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int len;

	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	int i = j - 1;

	int k = 0;

	char new_str[j];

	while (i >= 0)
	{
		new_str[k] = s[i];
		i--;
		k++;
	}
	s = new_str;
}
