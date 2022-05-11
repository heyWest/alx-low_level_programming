#include <stdlib.h>
#include "dog.h"

/**
 * _copy - Make a copy of passed in argument
 * @src: source
 * Return: pointer to copied data
 */
char *_copy(char *src)
{
	char *ptr;

	int i, len;

	if (src == NULL)
	{
		return (NULL);
	}
	for (len = 0; src[len] != '\0'; len++)
		;
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		ptr[i] = src[i];
	}
	ptr[i] = '\0';
	return (ptr);
}

/**
 * new_dog - create a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to the new dog instance
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *snoopie;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	buggie = malloc(sizeof(dog_t));
	if (buggie == NULL)
	{
		return (NULL);
	}
	new_name = _copy(name);
	if (new_name == NULL)
	{
		free(buggie);
		return (NULL);
	}
	(*buggie).name =  new_name;
	(*buggie).age = age;
	new_owner = _copy(owner);
	if (new_owner == NULL)
	{
		free((*buggie).name);
		free(buggie);
		return (NULL);
	}
	(*buggie).owner = new_owner;
	return (buggie);
}
