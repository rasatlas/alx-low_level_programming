#include "main.h"

/**
 * factorial - is a function that returns the factorial of a given number.
 *
 * @n: given integer to calculate factorial for.
 *
 * Return: factorial of given integer n if it is +ve, -1 if it is -ve integer.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
