#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: holds first string
 * @src: holds second string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0;

	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	b = 0;
	while (src[b] != '\0')
	{
		dest[a] = src[j];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
