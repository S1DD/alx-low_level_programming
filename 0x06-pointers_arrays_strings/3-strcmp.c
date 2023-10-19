#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: int value
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, limit;

	while (s1[a])
	{
		a++;
	}

	while (s2[b])
	{
		b++;
	}

	if (a <= b)
	{
		limit = a;
	}
	else
	{
		limit = b;
	}

	while (c <= limit)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (d);
}
