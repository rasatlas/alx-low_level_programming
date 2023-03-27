#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed
 * to by dest.
 *
 * @dest: char destination pointer
 * @src: char source pointer
 *
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *d;
	int a;

	for (a = 0; a < 1; a++)
	{
		while (*src != '\0')
		{
			*dest = *src;
			src++;
			dest++;
		}
	}
	return (d);
}
