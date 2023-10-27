#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the args content
 * @argc: The argument count
 * @argv: The argument vector
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
