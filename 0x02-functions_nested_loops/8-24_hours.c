#include "main.h"

/**
 * jack_bauer - is a function that prints every minute of the day of
 * Jack Bauer, strating from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{
	int h, i, j, m, n;

	for (h = 0; h <= 1; h++)
	{
		for (i = 0; i <= 9; i++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (n = 0; n <= 9; n++)
				{
					_putchar(h + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(m + '0');
					_putchar(n + '0');
					_putchar('\n');
				}
			}
		}
	}
	j = 2;
	for (i = 0; i <= 3; i++)
	{
		 for (m = 0; m <= 5; m++)
		 {
			 for (n = 0; n <= 9; n++)
			 {
				 _putchar(j + '0');
				 _putchar(i + '0');
				 _putchar(':');
				 _putchar(m + '0');
				 _putchar(n + '0');
				 _putchar('\n');
			 }
		}
	}
}
