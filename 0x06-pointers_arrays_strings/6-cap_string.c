#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to be capitalized
 * Return: capitalized string
 */
char *cap_string(char *s)
{
	int i = 1;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		if (s[i - 1] == " ")
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
				break;
			}
		}
		i++;
	}
	return (s);
}
