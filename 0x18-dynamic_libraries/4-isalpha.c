#include "main.h"

/**
 * _isalpha - is a function that checks for alphabetic character.
 * @c: value passed to _isalpha function from user
 *
 * Return: 1 on success.
 * on error, 0 is returned.
 */

int _isalpha(int c)
{
	int lstart = 'a';
	int lend = 'z';
	int ustart = 'A';
	int uend = 'Z';

	if (((lstart <= c) && (c <= lend)) || ((ustart <= c) && (c <= uend)))
		return (1);
	else
		return (0);
}
