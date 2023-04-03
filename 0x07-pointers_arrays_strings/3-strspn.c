#include "main.h"

/**
 * _strspn - is a function that gets the length of a prefix substring.
 *
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 *
 * Return: the number of characters in the intitial segment of s
 * which consists only of characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b;
	char *d;

	d = s;
	while (*accept != '\0')
	{
		s = d;
		while ((*s != ' ') || (*s != ','))
		{
			if (*s == *accept)
			{
				break;
			}
			else
				continue;
			s++;
		}
		if (*s != *accept)
		{
			a  = 0;
			break;
		}
		accept++;

	}
	if (*accept == '\0')
	{
		b = 0;
		s = d;
		while ((*s != ' ') || (*s != ','))
			b++;
		a = b;
	}
	return (a);
}
