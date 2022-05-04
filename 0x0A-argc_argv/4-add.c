#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_valid - checks if string is valid
 * @str: string
 * Return: Always 0.
 */
int is_valid(char *str)
{
	unsigned int count = 0;

	while (coutn < strlen(str))
	{
		if (!isdigit(str[count]))
			return (0);
		count++;
	}
	return (1);
}

/**
 * main - adds positive numbers
 * @argc: array size
 * @argv: array of arguments
 * Return: 0 if true else 1
 */
int main(int argc, char *argv[])
{
	int counter = 1;

	int new_int;

	int sum = 0;

	while (counter < argc)
	{
		if (is_valid(argv[counter]))
		{
			new_int = atoi(argv[counter]);
			sum += new_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		counter++;
	}
	printf("%d\n", sum);
	return (0);
}
