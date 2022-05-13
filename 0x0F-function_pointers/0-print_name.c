#include <stdlib.>
#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: name to print
 * @f: point to the print function
 */
void print_name(char *name, void(*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
