#include "main.h"

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: string 1.
 * @s2: string 2.
 * @n: first n bytes of s2;
 *
 * Return: pointer to a newly allocated space in memory, which contains s1,
 * followed by the first n bytes of s2, and null terminated. If function fails
 * return NULL. If n is greater or equal to the length of s2 then use the
 * entire string s2. If NULL is passed, treat it as an empty string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
	{
		len++;
		i++;
	}

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	len = 0;

	for (i = 0; (s1[i] != '\0'); i++)
		str[len++] = s1[i];
	for (i = 0; ((s2[i] != '\0') && i < n); i++)
		str[len++] = s2[i];

	str[len] = '\0';
	return (str);
}
