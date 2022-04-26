#include "main.h"

/**
 * mysubstr - prints substring
 * @str: string to be truncated
 * @j: starting point
 * Return: substring
 */
char mysubstr(char str[], int j)
{
	if (str[j] != '\0')
	{
		putchar(str[j]);
		mysubstr(str, j + 1);
	}
}
/**
 * _strchr - locates a character in a string
 * @s: string pointer
 * @c: character to be searched
 * Return: a pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (mysubstr(s, i));
		}
		i++;
	}
	return (NULL);
}
