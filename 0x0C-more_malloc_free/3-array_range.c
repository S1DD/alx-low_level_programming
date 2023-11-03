#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers
 * @min: ...
 * @max:  ...
 *
 * Return: integer value
 */
int *array_range(int min, int max)
{
	int *arr;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * (max - min) + sizeof(int));

	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
