#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long first = 0, second = 1, sum;
	float total_sum = 0.0;

	while (1)
	{
		sum = first + second;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			total_sum += sum;
		first = second;
		second = sum;
	}

	printf("%.0f\n", total_sum);

	return (0);
}
