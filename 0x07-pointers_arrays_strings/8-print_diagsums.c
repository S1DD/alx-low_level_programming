#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals in a square matrix
 * @a: The square matrix
 * @size: the size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
