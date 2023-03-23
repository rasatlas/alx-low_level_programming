#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */

void print_most_numbers(void)
{
	int i = 0;
	int upperLimit = 9;

	while (i <= upperLimit)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar(i + '0');
			i++;
		}
		else
		{
			i++;
		}
	}
	_putchar('\n');
}
