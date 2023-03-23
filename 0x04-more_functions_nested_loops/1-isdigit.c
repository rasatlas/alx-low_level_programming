#include "main.h"

/**
 * _isdigit - is a function that checks for a digit.
 * @c: user input integer value
 * Return: 1 is digit and 0 otherwise
 */

int _isdigit(int c)
{
	int zero = 48;
	int nine = 57;

	while ((zero <= c) && (c <= nine))
	{
		return (1);
	}
	return (0);
}
