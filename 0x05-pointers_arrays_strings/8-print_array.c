#include <stdio.h>
#include "main.h"

/**
 * print_array: Prints n elements of a array of integers
 *
 * @a: Array of integers
 * @n: Number of elemets of the array to be printed
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
