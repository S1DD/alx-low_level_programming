#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Description: This program prints all numbers of base 16 (hexadecimal) in
 * lowercase from '0' to '9' and 'a' to 'f'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
