#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0
 *
 * @n: The number used to print the time table
 *
 * Return: ...
 */
int print_times_table(int n)
{
	if (n < 15 || n > 15)
	{
		return;
	}
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; i <= n; j++)
		{
			int result = i * j;

			if (j == 0)
			{
				printf("%2d", result);
			}
			else
			{
				printf("%4d", result);
			}
		}
		printf("\n");
	}
}
