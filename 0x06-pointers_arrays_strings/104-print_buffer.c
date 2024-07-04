#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer 10 bytes at a time with the byte position
 * then showing the hex content,
 * then displaying printable characters.
 * @b: The buffer to be printed
 * @size: The number of bytes to be printed from the buffer
 */
void print_buffer(char *b, int size)
{
	int byte, idx;

	for (byte = 0; byte < size; byte += 10)
	{
		printf("%08x: ", byte);

		for (idx = 0; idx < 10; idx++)
		{
			if ((idx + byte) >= size)
				printf(" ");

			else
				printf("%02x", *(b + idx + byte));

			if ((idx % 2) != 0 && idx != 0)
				printf(" ");
		}

		for (idx = 0; idx < 10; idx++)
		{
			if ((idx + byte) >= size)
				break;

			else if (*(b + idx + byte) >= 31 && *(b + idx + byte) <= 126)
				printf("%c", *(b + idx + byte));

			else
				printf(".");
		}

		if (byte >= size)
			continue;

		printf("\n");

		if (size <= 0)
			printf("\n");
	}
}
