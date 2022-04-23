#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer to array
 * @n: number of array elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int arr[n];

	int i = n - 1;

	int k = 0;

	int m;

	while (i >= 0 && k < n)
	{
		arr[k] = a[i];
		i--;
		k++;
	}
	for (m = 0; m < n; m++)
	{
		a[m] = arr[m];
	}
}
