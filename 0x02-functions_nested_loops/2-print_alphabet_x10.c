#include "main.h"

/**
 *  print_alphabet_x10 - is a function that prints 10 times
 *  the alphabet, in lowercase, followed by a new line.
 *
 *  return - returns noting (Success)
 *
 */

void print_alphabet_x10(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		int start = 'a';
		int stop = 'z';

		while (start <= stop)
		{
			_putchar(start);
			start++;
		}
		_putchar('\n');
		counter++;
	}

}
