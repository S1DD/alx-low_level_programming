#include "main.h"
#include <stdio.h>

/**
  * print_number - Prints an integer.
  * @n: The integer to prints.
  *
  * Return: Nothing
  */
void print_number(int l)
{
	unsigned int j = l;

	if (l < 0)
	{
		l *= -1;
		j = l;
		_putchar('-');
	}

	j /= 10;

	if (j != 0)
		print_number(j);

	_putchar((unsigned int) l % 10 + '0');

}
