#include "main.h"

/**
 * _isupper - Checks for uppercase character
 *
 * @c: The letter to be checked
 *
 * Return: 1 if true and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
