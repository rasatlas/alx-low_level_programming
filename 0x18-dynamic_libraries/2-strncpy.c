#include "main.h"

/**
 * _strncpy - copies n bytes of one string to another
 * @src: string to be copied and pasted
 * @dest: string to be updated
 * @n: number of bytes of srs to be used
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
