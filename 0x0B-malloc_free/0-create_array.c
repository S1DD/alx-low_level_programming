#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and starts with a specific char
 * @size: Size of the array
 * @c: The char to initialize the array with
 * Return: A pointer to the array or null if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(sizeof(char) * size);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
