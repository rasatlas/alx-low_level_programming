#include "main.h"

/**
 * _puts_recursion - is a function that prints string, followed by a new line.
 *
 * @s: char pointer to a string.
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
