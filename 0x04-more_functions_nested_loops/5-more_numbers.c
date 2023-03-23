#include "main.h"
#include <unistd.h>
/**
 * more_numbers - is a function that prints 10 times the
 * numbers, from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i, j, k;
	char c = '\n';

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			_putchar(j + '0');
		}
		for (k = 0; k <= 4; k++)
		{
			_putchar('1');
			_putchar(k + '0');
		}
		write(1, &c, 1);
	}
}
