#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints an array of integers
 * @a: The array to be printed
 * @n: The number of elements in the array
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count != (n - 1))
		{
			printf(", ");
		}
	}

	printf("\n");
}
