#include "main.h"

/**
 * _strstr - is a function that locates a substring.
 *
 * @haystack: is the main string to be examined.
 * @needle: is the sub-string to be searched in haystack string.
 *
 * Return: a pointer to the first character of the found needle in haystack
 * otherwise a null pointer if needle is not present in haystack.
 * If needle points to an empty string, haystack is returned.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
			if (needle[j] == '\0')
				return (haystack + i);
		}
	}
	return ('\0');
}

/*
*char *_strstr(char *haystack, char *needle)
*{
*	char *ptrH = haystack;
*	char *ptrN = needle;
*	char *ptr;
*
*	if (*needle == '\0')
*		return (haystack);
*
*	while (*ptrH != '\0')
*	{
*		ptr = ptrH;
*
*		while ((*ptrH != '\0') && (*ptrN != '\0') && (*ptrH == *ptrN))
*		{
*			ptrH++;
*			ptrN++;
*		}
*
*		if (*ptrN == '\0')
*		{
*			return (ptr);
*		}
*
*		ptrH = (ptr + 1);
*	}
*	return ('\0');
*}
*/
