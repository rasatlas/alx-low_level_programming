#include "main.h"

/**
 * print_sign - is a function that prints the sign of a number.
 *
 * @n: is a value passed to the print_sign function from user.
 *
 * Return: if positive 1, if 0, 0
 * On negative negative -1 is returned.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
