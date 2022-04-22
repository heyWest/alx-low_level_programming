#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;

	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
