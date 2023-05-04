#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1, or if b is NULL.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '1')
			dec = (dec << 1) | 1;

		else if (*b == '0')
			dec <<= 1;

		else
			return (0);
		b++;
	}
	return (dec);
}
