#include "main.h"
#include <stdio.h>

/**
 * is_ascii - checks if an argument is a printable ascii character
 * @c: integer value
 * Return: 1 if True and 0 if False
 */
int is_ascii(int c)
{
	return (n >= 32 && n <= 126);
}
/**
 * str_tohex - prints hex values in formatted form
 * @str: string to be printed
 * @s: starting point
 * @e: end point
 * Return: void
 */
void str_tohex(char *str, int s, int e)
{
	int i = 0;

	while (i < 10)
	{
		if (i < e)
			printf("%02x", *(str + s + i));
		else
			printf(" ");
		if (i % 2)
			printf(" ");
		i++;
	}
}
/**
 * str_ascii - prints ascii values for string inputs
 * @str: string input
 * @s: start point
 * @e: end point
 * Return: void
 */
void str_ascii(char *str, int s, int e)
{
	int ch, i = 0;

	while (i < e)
	{
		ch = *(str + i + start);
		if (!is_ascii(ch))
			ch = 46;
		printf("%c", ch);
		i++;
	}
}
/**
 * print_buffer - prints a buffer
 * @str: string
 * @size: buffer size
 * Return: void
 */
void print_buffer(char *str, int size)
{
	int s, e;

	if (size > 0)
	{
		for (s = 0; s < size; s += 10)
		{
			e = (size - s < 10) ? size - start : 10;
			printf("%08x: ", s);
			str_tohex(str, s, e);
			str_ascii(str, s, e);
			printf("\n");
		}
	}
	else
		printf("\n");
}
