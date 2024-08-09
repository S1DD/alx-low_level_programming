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
	unsigned int num = 0, limit = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		num += (b[len] - '0') * limit;
		limit *= 2;
	}

	return (num);
}
