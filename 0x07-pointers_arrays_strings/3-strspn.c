#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: accepted
 *
 * Return Number of bytes in the inital segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, k = 0;

	while(accept[i])
	{
		j = 0;

		while(s[j] != 32)
		{
			if(accept[i] == s[j])
			{
				k++;
			}

			j++;
		}

		i++;
	}

	return (k);
}

