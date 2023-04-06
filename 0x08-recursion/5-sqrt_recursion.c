#include "main.h"

/**
 * _root_checker - calculates natural square root of a number.
 * @num: number to find natural square root for.
 * @base: base number to start check with.
 *
 * Return: square root of n, otherwise -1.
 */

int _root_checker(int num, int base)
{
	int square = (base * base);

	if (square == num)
		return (base);
	else if (square < num)
		return (_root_checker(num, base + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - is a function that returns the natural
 * square root of a number.
 *
 * @n: number to find natural square root for.
 *
 * Return: square root of n, otherwise -1.
 */

int _sqrt_recursion(int n)
{
	return (_root_checker(n, 1));
}
