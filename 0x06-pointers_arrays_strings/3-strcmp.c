#include "main.h"

/**
 * _strcmp - is  a function that compares two strings.
 *
 * @s1: left value string
 * @s2: right value string
 *
 * Return: returns 0 if s1 & s2 are equal, +ve integer if
 * s1 is greater than s2 else -ve integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = (*s1 - *s2);

	while ((i == 0) && ((*s1 != '\0') || (*s2 != '\0')))
	{
		s1++;
		s2++;
		i = (*s1 - *s2);
	}
	return (i);
}
