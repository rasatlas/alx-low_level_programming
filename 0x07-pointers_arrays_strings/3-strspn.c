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
	int i, j;
	unsigned int counter = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				counter++;
				break;
			}
		}
		if (s[j] == '\0')
			return (counter);
	}
	return (counter);
}
