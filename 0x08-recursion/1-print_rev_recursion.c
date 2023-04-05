#include "main.h"

/**
 * _print_rev_recursion - is a function that prints a string in reverse.
 *
 * @s: char pointer to a string.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
