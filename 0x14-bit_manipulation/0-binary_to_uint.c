#include "main.h"

/**
 * binary_to_uint - Converts a binary to an unsigned int
 * @b: The string to be converted to binary
 *
 * Return: Converted number or 0 if there is one or more chars
 * in the string that is not 0 or 1. b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int a;

	if (!b)
		return (0);
	for (a = 0; b[a] != '\0';a++)
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
