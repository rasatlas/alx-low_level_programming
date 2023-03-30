#include "main.h"

/**
 * string_toupper - is a function that changes all lowercase letters
 * of a string to uppercase.
 *
 * @str: accepts a char pointer to string
 *
 * Return: returns char pointer to a string
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*str != '\0')
	{
		if ((*s >= 97) && (*str <= 122))
		{
			*str -= 32;
		}
		str++;
	}
	return (ptr);
}
