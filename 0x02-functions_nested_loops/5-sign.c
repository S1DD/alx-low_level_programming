#include "main.h"

/**
 * print_sign - Prints the sign of a number
 *
 * @n: The number to check
 *
 * Return: 1 if n is greater than 0, -1 if n is less than 0, 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
