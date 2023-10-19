#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * @n: The limit of the concatenation
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int deslen = 0, i = 0;

	while (dest[deslen])
	{
		deslen++;
	}

	while (i < n && src[i])
	{
		dest[deslen] = src[i];
		deslen++;
		i++;
	}

	dest[deslen + n + 1] = '\0';

	return (dest);
}
