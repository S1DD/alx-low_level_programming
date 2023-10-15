#include "main.h"

/**
 * _idigit - Checks for a digit
 *
 * @c - The number to be checked
 *
 * Return: 1 if c is a digit or 0 if otherwise
 */
int _isdigit(int c) 
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	return (0);
}
