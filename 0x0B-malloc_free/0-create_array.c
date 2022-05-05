#include "main.h"

/**
 * create_array - create array with malloc
 * @size: size of array
 * @c: character argument
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *s;

	unsigned int i;

	s = (char *) malloc(size * sizeof(char));
	if (size == 0 || s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
// 	s[i] = '\0';
	return (s);
}
