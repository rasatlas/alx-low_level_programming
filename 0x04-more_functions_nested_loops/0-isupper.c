#include "main.h"

/**
 * _isupper - is a function that checks for uppercase character.
 * @c: user input integer value
 * Return: 1 is uppercase and 0 otherwise
 */

int _isupper(int c)
{
	int capA = 65;
	int capZ = 90;

	while ((capA <= c) && (c <= capZ))
	{
		return (1);
	}
	return (0);
}
