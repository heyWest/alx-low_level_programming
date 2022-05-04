#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: array size
 * @argv: array of arguments
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int pos, result, change, aux;

	int coins[] = {25, 10, 5, 2, 1};

	pos = result = change = aux = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]);
	if (result <= 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins[pos] != '\0')
	{
		if (result >= coins[pos])
		{
			aux = (result / coins[pos]);
			change += aux;
			result -= coins[pos] * aux;
		}
		pos++;
	}
	printf("%d\n", change);
	return (0);
}
