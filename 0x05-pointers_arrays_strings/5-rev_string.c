#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 *
 * @s: char pointer
 *
 * Return: length of the string, 0 is null
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * rev_string - a function that reverses a string.
 *
 * @s: char pointer
 */

void rev_string(char *s)
{
	int length = _strlen(s);
	int i;
	char *begin_ptr, *end_ptr, ch;

	/*Setting the begin_ptr to start of string*/

	begin_ptr = s;

	/*Setting the end_ptr the end of the string*/

	end_ptr = s + length - 1;

	/*Swap the char from start and end index using begin_ptr and end_ptr*/

	for (i = 0; i < (length - 1) / 2; i++)
	{
	       /* swap character*/
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		/* update pointers positions*/

		begin_ptr++;
		end_ptr--;
	}
}
