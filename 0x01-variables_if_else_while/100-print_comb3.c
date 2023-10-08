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

	for (i = 0; i < 9; i++)
	{
		for (n = 0; n <= 9; n++)
		{
			if (i < n)
			{
				putchar(i);
				putchar(n);


				if (i != 8 || (i == 8 && i != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
