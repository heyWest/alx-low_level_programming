#include "main.h"
#include <stdio.h>

/**
 * main - print the result of the multiplication
 * @argc: array size
 * @argv: array of arguments
 * Return: Always 0 if true, else 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
