#include "main.h"

/**
 * is_digit - checks if value is a number
 * @k: value
 * Return: 1 if value is a digit and 0 if value is not
 */
int is_digit(unsigned int k)
{
	return (k >= '0' && k <= '9');
}

/**
 * _atoi - converts string to integer
 * @s: string pointer as a parameter
 * Return: Return the num
 */
int _atoi(char *s)
{
	unsigned int i = 0;

	unsigned int num = 0;

	int sign = 1;

	while (s[i] != '\0')
	{
		if (is_digit(s[i]))
		{
			num = (s[i] - 48) + num * 10;
			if (s[i + 1] == ' ')
				break;
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
		i++;
	}
	return (num * sign);
}
