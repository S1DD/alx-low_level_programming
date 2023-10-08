#include <stdio.h>

/**
 * main - Prints lowercase alphabet in reverse
 *
 * Description: This program prints the lowercase alphabet in reverse order,
 * starting from 'z' and ending at 'a'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
