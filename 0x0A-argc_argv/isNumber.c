#include "main.h"

/**
 * isNumber -  checks if a number is digit or not.
 *
 * @arg: pointer to a number to be checked for being digit.
 *
 * Return: 1 if digit, otherwise 0.
 */

int isNumber(char *arg)
{
	int i;

	for (i = 0; arg[i] != '\0'; i++)
	{
		if (!isdigit(arg[i]))
		{
			return (0);
		}
	}
	return (1);
}
