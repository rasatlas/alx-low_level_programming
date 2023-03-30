#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 *
 * @str: char pointer to a string of chars
 *
 * Return: returns char pointer to a string of chars
 */

char *cap_string(char *str)
{
	char *ptr = str;

	if (*str != '\0')
	{
		if ((*str >= 97) && (*str <= 122))
			*str -= 32;

		while (*str != '\0')
		{
			if ((*str == ' ') || (*str == '\n') || (*str == '\t') || (*str == ',') || (*str == '.') || (*str == '!') || (*str == '?') || (*str == '"') || (*str == '(') || (*str == ')') || (*str == '{') || (*str == '}'))
			{
				str++;
				if ((*str >= 97) && (*str <= 122))
				{
					*str -= 32;
				}
				str--;
			}
			str++;
		}
	}
	return (ptr);
}
