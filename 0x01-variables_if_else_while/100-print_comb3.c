#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits
 *
 * Description: This program prints all possible different combinations of
 * two digits from '01' to '89', separated by commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = i + 1; n <= 9; n++)
		{
			putchar('0' + i);
			putchar('0' + n);

			if (i != 8 || n != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
