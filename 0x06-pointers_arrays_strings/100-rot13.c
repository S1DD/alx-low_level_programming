#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to be encoded
 *
 * Return: ...
 */
char *rot13(char *s)
{
	int idx1 = 0, idx2;
	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};

	while (s[idx1])
	{
		for (idx2 = 0; idx2 < 52; idx2++)
		{
			if (s[idx1] == alphabet[idx2])
			{
				s[idx1] = rot13key[idx2];
				break;
			}
		}

		idx1++;
	}

	return (s);
}
