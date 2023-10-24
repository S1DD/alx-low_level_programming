#include "main.h"

/**
 * _strpbrk - searches a string of a set of bytes
 * @s: source string
 * @accept: Accepted string
 *
 * Return: the string since the first accepted character
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, b;

	while (s[i])
	{
		b = 0;

		while (accept[b])
		{
			if (s[i] == accept[b])
			{
				s += i;
				return (s);
			}

			b++;
		}

		i++;
	}

	return ('\0');
}
