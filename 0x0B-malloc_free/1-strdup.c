#include "main.h"

/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 *
 * @str: string given as a parameter.
 *
 * Return: NULL if str = NULL, On success, returns a pointer to the duplicated
 * string. Returns NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	int i = 0;
	int len = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (NULL);

	for (; i < len; i++)
		ptr[i] = str[i];
	return (ptr);
}
