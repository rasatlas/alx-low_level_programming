#include "main.h"

/**
 * puts_half - is a function that prints half of a string,
 * followed by a new line.
 *
 * @str: char pointer
 */

void puts_half(char *str)
{
	int l = _strlen(str);

	if ((l % 2) == 0)
	{
		int mid = l / 2;

		while (str[mid] != '\0')
		{
			_putchar(str[mid]);
			mid++;
		}
	}
	else
	{
		int mid = (l - 1) / 2;

		while (str[mid] != '\0')
		{
			_putchar(str[mid]);
			mid++;
		}
	}
	_putchar('\n');
}
