#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 *
 * @x: The base value
 * @y: The Exponential value
 *
 * Return: Base value raised by the exponential value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
