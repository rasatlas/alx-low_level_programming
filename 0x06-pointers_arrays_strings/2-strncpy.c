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
	char *s = src;
	int src_len = 0;

	if (n != 0)
	{
		while (*dest != '\0')
			dest++;
		while (*src != '\0')
		{
			src++;
			src_len++;
		}

		if (src_len > n)
		{
			while (*s != '\0')
			{
				*dest = *s;
				dest++;
				s++;
			}
		}
		else
		{
			while (*s != '\0')
			{
				*dest = *s;
				dest++;
				s++;
				n--;
			}
			while (n > src_len)
			{
				*dest = '\0';
				n--;
			}
		}
	}
	return (d);
}
