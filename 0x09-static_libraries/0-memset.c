#include "main.h"

/**
 * _memset - is a function that fills memory with a constant byte.
 * @s: char pointer to string of chars
 * @b: char value to fill memory space with
 * @n: unsigne int value representing max memory size to fill with b
 *
 * Return: returns pointer to the original string of chars
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr = s;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (ptr);
}
