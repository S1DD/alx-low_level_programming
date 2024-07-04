#include "main.h"

char *infinite_add(char *n1, char *n2, char *r, int size_r);
char *sum_strings(char *n1, char *n2, char *r, int curr_idx);

/**
 * infinite_add - Adds two numbers
 * @n1: The first number to be added
 * @n2: The second number to be added
 * @r: The buffer to store the result
 * @size_r: The buffer size
 *
 * Return: If r can store the sum - a pointer to the result
 *         If r cannot store the sum - 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int idx, n1_len = 0, n2_len = 0;

	for (idx = 0; *(n1 + idx); idx++)
		n1_len++;

	for (idx = 0; *(n2 + idx); idx++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (sum_strings(n1, n2, r, --size_r));
}

/**
 * sum_strings - Adds the numbers stored in two strings.
 * @n1: The string containing the first number to be added.
 * @n2: The string containing the second number to be added.
 * @r: The buffer to store the result.
 * @curr_idx: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */
char *sum_strings(char *n1, char *n2, char *r, int curr_idx)
{
	int num, tens = 0;

	for (; *n1 && *n2; n1--, n2--, curr_idx--)
	{
		num = (*n1 - '0') + (*n2 - '0');
		num += tens;
		*(r + curr_idx) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n1; n1--, curr_idx--)
	{
		num = (*n1 - '0') + tens;
		*(r + curr_idx) = (num % 10) + '0';
		tens = num / 10;
	}

	for (; *n2; n2--, curr_idx--)
	{
		num = (*n2 - '0') + tens;
		*(r + curr_idx) = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens && curr_idx >= 0)
	{
		*(r + curr_idx) = (tens % 10) + '0';
		return (r + curr_idx);
	}

	else if (tens && curr_idx < 0)
		return (0);

	return (r + curr_idx + 1);
}
