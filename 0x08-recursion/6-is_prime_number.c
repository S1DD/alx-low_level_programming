#include "main.h"

int check_prime(int n, int i);

/**
 * is_prime_number - Checks if a value is a prime number
 * @n: The value to be evaluated
 *
 * Return: 1 if the input integer is a prime number. 0 if otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - Check if numer is prime
 * @n: the number to be evaluated
 * @i: iterator
 *
 * Return: 1 for prime number or 0 for composite number
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (n % i == 0 && i > 1)
	{
		return (0);
	}

	if ((n / i) < i)
	{
		return (1);
	}

	return (check_prime(n, i + 1));
}
