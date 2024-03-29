#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: An array of integers
 * @n: The number of elements of the array
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int *p, i, temp, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		temp = a[k];
		a[k] = *p;
		*p = temp;
		p--;
	}
}
