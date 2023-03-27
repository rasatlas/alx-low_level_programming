#include "main.h"

/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout.
 *
 * @str: char pointer
 */

void _puts(char *str)
{
	int i = 0;
	char j;

	while (str[i])
	{
		j = str[i];
		_putchar(j);
		i++;
	}
	_putchar('\n');
}
