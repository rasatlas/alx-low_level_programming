#include "main.h"

/**
 * _memcpy - is a function that copies memory area.
 *
 * @dest: char pointer pointing destination
 * @src: char pointer pointing source
 * @n: size in bytes copied from memory area src to memory area dest
 *
 * Return: char pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *ptr = dest;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (ptr);
}
