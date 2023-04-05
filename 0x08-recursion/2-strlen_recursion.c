#include "main.h"

/**
 * _strlen_recursion - is a function that returns the length of a string.
 *
 * @s: char pointer to a string.
 *
 * Return: length of string s;
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}
