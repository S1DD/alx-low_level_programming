#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;
	unsigned long fib1_high1, fib1_low1, fib2_high1, fib2_low1;
	unsigned long high1, low1;

	for (count = 0; count < 92; count++)
	{
		sum = fib1 + fib2;
		printf("%lu, ", sum);

		fib1 = fib2;
		fib2 = sum;
	}

	fib1_high1 = fib1 / 10000000000;
	fib2_high1 = fib2 / 10000000000;
	fib1_low1 = fib1 % 10000000000;
	fib2_low1 = fib2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		high1 = fib1_high1 + fib2_high1;
		low1 = fib1_low1 + fib2_low1;
		if (fib1_low1 + fib2_low1 > 9999999999)
		{
			high1 += 1;
			low1 %= 10000000000;
		}

	printf("%lu%lu", high1, low1);
	if (count != 98)
		printf(", ");

	fib1_high1 = fib2_high1;
	fib1_low1 = fib2_low1;
	fib2_high1 = high1;
	fib2_low1 = low1;
	}
	printf("\n");
	return (0);
}
