#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string pointer
 * @accept: variable
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{
		k = 0;
		while (accept[k] != '\0')
		{
			if (*s == accept[k])
				return (s);
			k++;
		}
		s++;
	}
	return (0);
}
