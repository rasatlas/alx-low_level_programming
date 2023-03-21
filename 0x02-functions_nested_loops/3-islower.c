#include "main.h"

/**
 * _islower - is a function that checks for lowercase character.
 *
 * @c: is value passed to _islower to check it it is lowercase or not.
 *
 * Return: on Success 1.
 * On error, 0
 */

int _islower(int c)
{
	int start = 'a';
	int end = 'z';

		if ((start <= c) && (c <= end))
			return (1);
		else
			return (0);
}
