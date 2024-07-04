#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to be encoded
 *
 * Return: ...
 */
char *rot13(char *s)
{
	int i, j;
	char data[] = "ABCDEFGHIJLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datar[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datar[j];
				break;
			}
		}
	}
	return (s);
}
