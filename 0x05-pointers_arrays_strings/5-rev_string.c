#include "main.h"

/**
 * rev_string - reverses a string
 * @s: takes a string pointer as a parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int j = 0;

	int i, k;

	const int len;

	while (s[j] != '\0')
	{
		j++;
	}

	i = j - 1;
	k = 0;
	len = j;
	char new_str[len];

	while (i >= 0)
	{
		new_str[k] = s[i];
		i--;
		k++;
	}
	s = new_str;
}
