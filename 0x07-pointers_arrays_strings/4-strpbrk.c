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
	char *ptr;
	char *ptrA = accept;
	int i = 0;
	int j = 0;

	for (; s[i] != '\0'; i++)
	{
		for (; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	if (*ptrA == '\0')
	ptr = NULL;
	return (ptr);

}
