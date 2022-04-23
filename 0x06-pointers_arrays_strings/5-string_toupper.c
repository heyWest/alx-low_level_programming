include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string
 * Return: returns char
 */


char *string_toupper(char *s)
{
	int a = 0;

	while (a != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
			s[a] -= 32;
	}
	return (s);
}
