#include <stdio.h>

/**
 * hare_main - function to be run before the main func
 * Return: void
 */
void __attribute__((constructor)) hare_main()
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back\n");
}
