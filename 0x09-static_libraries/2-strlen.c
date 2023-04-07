#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: char pointer
 *
 * Return: length of the string, 0 is null
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
