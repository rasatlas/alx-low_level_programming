#include "main.h"

/**
 * _strlen - finds the length of the string s.
 *
 * @s: char pointer to string.
 *
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len += _strlen(s + 1);
		return (len += 1);
	}

	return (0);
}

/**
 * check_palindrome - checks if s is palindrome or not.
 *
 * @s: char pointer to string.
 * @initialIndex: first index of string s.
 * @endIndex: last index of string s.
 *
 * Return: 1 is s is palindrome, otherwise 0.
 */

int check_palindrome(char *s, int initialIndex, int endIndex)
{
	if (initialIndex >= endIndex)
		return (1);
	else if (s[initialIndex] != s[endIndex])
		return (0);
	else
		return (check_palindrome(s, (initialIndex + 1), (endIndex - 1)));
}

/**
 * is_palindrome - is a function that returns 1 if a string is a palindrome
 * and 0 if not.
 *
 * @s: string to be checked for palindrome.
 *
 * Return: 1 if s is palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (check_palindrome(s, 0, (len - 1)));
}
