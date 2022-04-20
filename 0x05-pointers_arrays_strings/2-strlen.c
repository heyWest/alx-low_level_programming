#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
