#include <stdio.h>

/**
 * main - Prints a series of numbers with commas
 *
 * Description: This program prints a series of numbers from '0' to '9'
 * separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
