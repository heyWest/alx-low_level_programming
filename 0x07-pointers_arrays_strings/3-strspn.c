#include "main.h"

/**
 * _strspn - get the length of a prefix substring
 * @s: pointer to string
 * @accept: variable
 * Return: acc
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	int count;

	int k;

	int acc = 0;

	while (s[i] != '\0' && s[i])
	{
		count = 0;
		k = 0;
		while (accept[k] != '\0')
		{
			if (accept[k] == s[i])
			{
				count++;
			}
			k++;
		}
		if (count == 0)
		{
			return (acc);
		}
		else
		{
			acc += count;
		}
		i++;
	}
	return (acc);
}
