#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int deslen = 0, i;

	while (dest[deslen])
	{
		deslen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[deslen] = src[i];
		deslen++;
	}

	dest[deslen] = '\0';
	return (dest);
}
