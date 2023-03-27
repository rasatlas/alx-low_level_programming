#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: char pointer
 *
 * Return: length of the string, 0 is null
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

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
