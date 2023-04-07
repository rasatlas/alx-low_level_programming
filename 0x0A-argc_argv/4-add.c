#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumber -  checks if a number is digit or not.
 *
 * @argv: pointer to a number to be checked for being digit.
 *
 * Return: 1 if digit, otherwise 0.
 */

int isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i] != '\0'; i++)
	{
		if (!isdigit(argv[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point & a program that adds positive numbers.
 *
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: if no number is passed to the program, print 0, followed by \n,
 * if one of the number contains symbols that are not digits, print Error,
 * followed by a new line, and return 1.
 */

int main(int argc, char  *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isNumber(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
		return (0);
	}
	else
	{
		printf("%d\n", 0);
		return (1);
	}

}
