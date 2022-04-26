#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to string
 * @accept: variable
 * Return: accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int count;

	int k;

	int acc = 0

	while (s[i] != '\0' && s[i] != " ")
	{
		count = 0;
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[i] == s[k])
			{
				count++;
			}
			k++;
		}
		acc += count;
		if (count == 0)
		{
			return (acc);
		}
		i++;
	}
	return (acc);
}
