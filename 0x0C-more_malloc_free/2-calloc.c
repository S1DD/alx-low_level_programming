#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array, using malloc
 * @nmemb: Number of members
 * @size: Size of memory
 *
 * Return: ...
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *ptr;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	b = nmemb * size;
	ptr = malloc(b);

	if (ptr == NULL)
		return (NULL);

	while (a < b)
	{
		ptr[a] = 0;
		a++;
	}

	return (ptr);
}
