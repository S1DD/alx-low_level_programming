#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all lowercase letters from 'a' to 'z'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
