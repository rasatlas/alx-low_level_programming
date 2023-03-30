#include "main.h"

/**
 * leet - is a function that encodes a string into 1337.
 *
 * @str: char pointer to a string.
 *
 * Return: returns char pointer to 1337ed string of chars.
 */

char *leet(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if ((*str == 'A') || (*str == 'a'))
			*str = '4';
		else if ((*str == 'E') || (*str == 'e'))
			*str = '3';
		else if ((*str == 'O') || (*str == 'o'))
			*str = '0';
		else if ((*str == 'T') || (*str == 't'))
			*str = '7';
		else if ((*str == 'L') || (*str == 'l'))
			*str = '1';
		str++;
	}
	return (ptr);
}
