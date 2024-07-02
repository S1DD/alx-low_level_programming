#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j = 0, k;
	char *b, line;

	b = s;

	while (s[j] != '\0')
	{
		j++;
	}

	for (k = 1; k < j; k++)
	{
		b++;
	}

	for (i = 0; i < (j / 2); i++)
	{
		line = s[i];
		s[i] = *b;
		*b = line;
		b--;
	}
}
