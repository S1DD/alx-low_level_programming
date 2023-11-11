#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - SUmms all its parameters
 * @n: The number of parameters passed to the function
 * @...: A variable number of parameters to calculate the sum
 * 
 * Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, total = 0;

	va_start(nums, n);

	for (i = 0; i < n; i++)
		total += va_arg(nums, int);

	va_end(nums);

	return (total);
}
