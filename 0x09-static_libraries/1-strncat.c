#include "main.h"

/**
 * _strncat - is a function that concatenates two strings
 *
 * @dest: char string destination
 * @src: char string source
 * @n: bytes to be taken off src & concatenated to dest
 *
 * Return: char pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int counter = 0;
	char *ptr = dest;

	if ((*src != '\0') && (n != 0))
	{
		while (*dest != '\0')
			dest++;
		while ((*src != '\0') && (counter < n))
		{
			*dest = *src;
			dest++;
			src++;
			counter++;
		}
	}
	return (ptr);
}
