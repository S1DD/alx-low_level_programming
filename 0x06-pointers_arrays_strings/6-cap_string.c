#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: ...
 *
 * Return: ...
 */
char *cap_string(char *s)
{
	int a = 0;
	char seperators[] = " \t\n,;.!?\"(){}";

	while (s[a])
	{
		int i = 0;

		while (seperators[i])
		{
			if ((a == 0 || s[a - 1] == seperators[i]) && (s[a] >= 'a' && s[a] <= 'z'))
			{
				s[a] -= 32;
			}
			i++;
		}
		a++;
	}

	return (s);
}
