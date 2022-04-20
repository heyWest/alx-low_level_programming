#include "main.h"

/**
 * rev_string - reverses a string
 * @s: takes a string pointer as a parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char *start_a, *end_a, a;

	int i, counter;

	int len = 0;

	for (i = 0; s[i]; i++)
	{
		len++;
	}
	counter = len;
	start_a = s;
	end_a = s;

	for (i = 0; i < counter - 1; i++)
	{
		end_a++;
	}
	for (i = 0; i < counter / 2; i++)
	{
		a = *end_a;
		*end_a = *start_a;
		*start_a = a;
		start_a++;
		end_a--;
	}
}
