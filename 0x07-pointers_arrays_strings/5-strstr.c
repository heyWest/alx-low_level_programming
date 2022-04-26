#include "main.h"

/**
 * _strstr - function that locates a substring
 * @haystack: variable
 * @needle: variable
 * Return: pointer
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp1, *temp2;

	while (*haystack != '\0')
	{
		temp1 = haystack;
		temp2 = needle;
		while (*haystack == *temp2 && *haystack != '\0' && *temp2 != '\0')
		{
			haystack++;
			temp2++;
		}
		if (*temp2 == '\0')
		{
			return (temp1);
		}
		haystack = temp1 + 1;
	}
	return (0);
}
