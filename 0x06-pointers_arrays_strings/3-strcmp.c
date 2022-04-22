#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to be evaluated
 * @s2: string to be evaluated
 * Return: results
 */
int _strcmp(char *s1, char *s2)
{
	char *check_1 = s1;

	char *check_2 = s2;

	while (*check_1 == *check_2 && *check_1 != '\0' && *check_2 != '\0')
	{
		check_1++;
		check_2++;
	}
	return (*check_1 - *check_2);
}
