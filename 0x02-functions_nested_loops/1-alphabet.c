#include "main.h"

/**
 *  print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 *  return: void
 *
 */

void print_alphabet(void)
{
	int start = 'a';
	int stop = 'z';

	while (start <= stop)
	{
		_putchar(start);
		start++;
	}
	_putchar('\n');
}
