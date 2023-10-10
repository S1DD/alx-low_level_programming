#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, in lowercase, followed by a new line
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char c;

	while (n++ <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
