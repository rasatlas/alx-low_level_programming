#include "main.h"

/**
 * _printNumber - prints a number if it is more than two digits
 * and less than 3 digits.
 *
 * times_table - is a function that prints the 9 times table, starting with 0.
 *
 * @num: is a product of row and column and is more than 9.
 *
 */

void _printNumber(int num)
{
	int i, j;

	i = num / 10;
	j = num % 10;
	_putchar(i + '0');
	_putchar(j + '0');
}

/**
 * times_table - is a function that prints the 9 times table, starting with 0.
 *
 */

void times_table(void)
{
	int row, column, p;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (column = 1; column <= 9; column++)
		{
			p = (row * column);
			if (p > 9)
			{
				_putchar(',');
				_putchar(' ');
				_printNumber(p);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(p + '0');
			}
		}
		_putchar('\n');
	}
}
