#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: The destination string
 * @src: The srouce string
 * @n: The copy limit
 *
 * Return: char value
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j])
	{
		j++;
	}

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
