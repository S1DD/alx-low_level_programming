#include "main.h"

/**
 * times_table - Prints the 9 times table in the specidifed format
 *
 *
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int result = i * j;

			_putchar(result + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
				{
					_putchar(' ');
				}
			}

		}
		_putchar('\n');
	}

}
