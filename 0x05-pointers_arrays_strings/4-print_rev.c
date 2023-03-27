#include "main.h"

/**
 * print_rev - is a function that prints a string, in reverse,
 * followed by a new line.
 *
 * @s: char pointer
 */

void print_rev(char *s)
{
	int i = _strlen(s);

	while (i >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	_putchar('\n');
}
