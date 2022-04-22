#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: encoded string
 */
char *leet(char *s)
{
	int i = 0;

	int j = 0;

	char lower_arr[] = {'a', 'e', 'o', 't', 'l'};

	char upper_arr[] = {'A', 'E', 'O', 'T', 'L'};

	char numz[] = {'4', '3', '0', '7', '1'};

	while (s[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == lower_arr[j] || s[i] == upper_arr[j])
			{
				s[i] = numz[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
