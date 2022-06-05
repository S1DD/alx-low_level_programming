#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	int ld = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	ld = n % 10;
	if(n == 0)
	{
		printf("The last digit of %i is %i and is 0\n",n,ld);
	}
	else if(ld < 6 && ld != 0)
	{
		printf("The last of digit %i is %i and is less than 6 and not 0\n",n,ld);
	}
	if(ld > 5)
	{
		printf("The last digit of %i is %i and is greater than 5\n",n,ld);
	}
	return (0);
}


