#include "main.h"

/**
 * leet - Encodes a string into 1337
 * @s: The string to encode
 *
 * Return: The encoded string
 */
char *leet(char *s)
{
	int a = 0;

	char r[] = "AEOTL";
	char n[] = "43071";

	while (s[a])
	{
		int b = 0;

		while (r[b])
		{
			if (s[a] == r[b] || s[a] == r[b] + 32)
			{
				s[a] = n[b];
				break;
			}
			b++;
		}

		a++;
	}
	return (s);
}
