#include <stdio.h>

/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 1, sum;

	printf("%lu", fib1);
	
	for (count = 1; count < 50; count++)
	{
		sum = fib1 + fib2;

		if (sum != 1)
			printf(", ");
		
		printf("%lu", sum);
		
		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");

	return 0;
}
