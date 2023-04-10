#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: returns pointer to the concatenated string. NULL upon failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		i++;
		len1++;
	}

	while (s2[j] != '\0')
	{
		j++;
		len2++;
	}

	ptr = malloc(sizeof(char) * (len1 + len2 + 1));
		if (ptr == NULL)
			return (NULL);
	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[i + len1] = s2[i];
	ptr[i + len1] = '\0';
	return (ptr);
}
