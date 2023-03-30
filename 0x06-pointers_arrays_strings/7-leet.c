#include "main.h"

/**
 * leet - is a function that encodes a string into 1337.
 *
 * @str: char pointer to a string.
 *
 * Return: returns char pointer to 1337ed string of chars.
 */

char *leet(char *str)
{
	char *ptr = str;
	int i, j;
	char a_array[] = "aAeEoOtTlL";
	char n_array[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == a_array[j])
			{
				str[i] = n_array[j];
			}
		}
	}
	return (ptr);
}
