#include "main.h"

/**
 * wildcmp - is a function that compares two strings and returns 1 if the
 * strings can be considered identical, otherwise return 0.
 *
 * @s1: string 1 to compare
 * @s2: strin g2 to compare
 *
 * Return: returns 1 if strings identical, otherwise 0.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}
		return (*s2 == '\0');
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}

/*solved after discussion with my group members on pld*/
