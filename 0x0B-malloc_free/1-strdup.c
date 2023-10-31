#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string
 * @str: The string to duplicate
 *
 * Return: The duplicated string
 */
char *_strdup(char *str)
{
	int a = 0, size = 1;
	char *s;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[size])
	{
		size++;
	}

	s = malloc((sizeof(char) * size) + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	while (a < size)
	{
		s[a] = str[a];
		a++;
	}

	s[a] = '\0';
	return (s);
}

