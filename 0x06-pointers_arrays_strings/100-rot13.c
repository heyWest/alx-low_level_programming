#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	int j = 0;

	char alphabt[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char rot[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*(s + i) != '\0')
	{
		while (j < 52)
		{
			if (*(s + i) == alphabt[j])
			{
				*(s + i) = rot[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
