#include "main.h"

/**
 * _strcat - is a function that concatenates two strings.
 *
 * @dest: is a char pointer to a string
 * @src: is a char pointer to a string
 *
 * Return: pointer to dest string
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	if (*src != '\0')
	{
		while (*dest != '\0')
		{
			dest++;
		}

		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
	}

	return (ptr);
}
