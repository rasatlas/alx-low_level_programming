#include "main.h"

/**
 * _strchr - is a function that locates a character in a string.
 *
 * @s: char pointer to a string
 * @c: character to be looked for in string s
 *
 * Return: a pointer to the first occurrence of the character c
 * in the string s or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}
