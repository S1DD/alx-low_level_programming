#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers
 * @seperator: The string printed in between the numbers
 * @n: number of integers passed to the function
 * @...: Numbers passed to the function
 *
 * Return: Nothing
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i = 0;

	if (n > 0)
	{
		va_start(nums, n);

		while (i < n)
		{
			printf("%d", va_arg(nums, int));

			if (i != n - 1 && seperator != NULL)
				printf("%s", seperator);

			i++;
		}
		va_end(nums);
	}
	printf("\n");
}
