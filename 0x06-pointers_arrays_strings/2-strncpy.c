#include "main.h"

/**
 * _strncpy - is a function that copies a string.
 *
 * @dest: destination string pointed by dest
 * @src: source string pointed by src
 * @n: number of bytes to be copied from src
 *
 * Return: char pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	int i;

	if (*src != '\0')
	{
		i = 0;
		while (i < n)
		{
			*dest = *src;
			src++;
			dest++;
			i++;
		}
	}
	return (d);
}
