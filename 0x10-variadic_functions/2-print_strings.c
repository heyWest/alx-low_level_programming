#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	va_start(ap, n);

	int i = 0;

	char *temp_str;

	for (i = 0; i < n; i++)
	{
		temp_str = va_arg(ap, char *);
		if (temp_str)
			printf("%s", temp_str);
		else
			printf("(nil)");
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
