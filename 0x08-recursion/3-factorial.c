#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: The value for calculating the factorial
 *
 * Return: -1 if n is lower than 0, otherwise return the value
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
