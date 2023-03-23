#include "main.h"

/**
 * print_number - is a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */

void print_number(void)
{
	int i = 0;
	int upperLimit = 9;

	while (i <= upperLimit)
	{
		_putchar(i);
	}
	_putchar('\n');
}
