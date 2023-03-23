#include "main.h"

/**
 * more_numbers - is a function that prints 10 times the
 * numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void);
{
	int i = 0;
	int j = 1;
	int upperLimit = 14;
	int xPrint = 10;

	while (j <= xPrint)
	{
		for (; i <= upperLimit; i++)
		{
			_putchar(i + '0');
		}
		_putchar('\n');
		j++;
	}
}
