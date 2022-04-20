#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 */
int main(void)
{
	int n;

	srand(time(NULL));
	n = rand();
	printf("%i\n", n);
	return (0);
}
