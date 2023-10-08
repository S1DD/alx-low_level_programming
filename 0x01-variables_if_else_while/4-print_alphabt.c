#include <stdio.h>

/**
 * main - Prints all lowercase letters except for 'q' and 'e'
 *
 * Description: This program prints all lowercase letters from 'a' to 'z'
 *              except for 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}

	putchar('\n');

	return (0);
}
