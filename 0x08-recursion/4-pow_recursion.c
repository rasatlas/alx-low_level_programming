#include "main.h"

/**
 * _pow_recursion - is a function that returns the value of x
 * raised to the power of y.
 *
 * @x: integer base.
 * @y: integer exponent.
 *
 * Return: -1 if y is less than 0, else x raised to y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	return (x * _pow_recursion(x, (y - 1)));
}
