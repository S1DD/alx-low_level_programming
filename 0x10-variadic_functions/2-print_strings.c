#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings
 * @seperator: Prints a seperator between the strings
 * @n: The strings to be printed
 * @...: The number of strings to be printed
 *
 * Return: Nothing
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n;i++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}

	printf("\n");
}
