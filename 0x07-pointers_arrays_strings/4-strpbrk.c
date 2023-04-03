#include "main.h"

/**
 * _strpbrk - is a function that searches a string for any of a set of bytes.
 *
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: a pointer to the character in s that matches one of the characters
 * in accept, else returns NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	if ((*accept != '\0') && (*s != '\0'))
	{
		for (i = 0; *s; i++)
		{
			for (j = 0; *accept; j++)
			{
				if (s[i] == accept[j])
				{
					return (s + i);
				}
			}
		}
	}

	if (*accept == '\0')
		ptr = NULL;

	return (ptr);
}
